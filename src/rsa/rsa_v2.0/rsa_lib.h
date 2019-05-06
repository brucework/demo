#ifndef _RSA_H__

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//#define RSA_DEBUG 1

/**
*For genkey
*/
#define ACCURACY 5
#define EXPONENT_MAX 1000
//refer prime_number_array
//202*16+13-80=3165
#define SINGLE_MAX 3165
#define RSA_KEY_BYTES 3

#define CIPHER_TEXT_SIZE 33

enum KEY_TYPE{
	PUBLIC,
	PRIVATE,
};

enum FILE_TYPE{
	CIPHERTEXT,
	PLAINTEXT,
};

typedef struct rsa_private {
	int n;
	int e;
	int d;
	int p;
	int q;
	int phi;
	int bytes;
}_RSA;

/**
 * Check whether n is a prime,
 */
int prime_check(int n);

/**
 * find the lagest  the prime.
 * return the lagest prime.
 */
int prime_max(int n);

/**
 *genkey function will generate the public & private key.
 * p & q should be prime.
 */
void genkey(int p, int q, _RSA *key);

/**
 * Encode the message of given length, using the public key (exponent, modulus)
 * The resulting array will be of size len/bytes, each index being the encryption
 * of "bytes" consecutive characters, given by m = (m1 + m2*128 + m3*128^2 + ..),
 * encoded = m^exponent mod modulus
 * bytes: 3
 * len: (sizeof(message) - sizeof(message)%bytes)/bytes + 1) * bytes
 * message: text
 * public key(exponent, modulus)
 */
int* encodeMessage(int len, int bytes, char* message, int exponent, int modulus);

/**
 * Decode the cryptogram of given length, using the private key (exponent, modulus)
 * Each encrypted packet should represent "bytes" characters as per encodeMessage.
 * The returned message will be of size len * bytes.
 * bytes: 3
 * len: sizeof(data) / sizeof(data[0])
 * data: ciphertext
 * private key(exponent, modulus)
 */
char* decodeMessage(int len, int bytes, int* cryptogram, int exponent, int modulus);


/**
*plain text format:Total=12Bytes
*/ 
typedef  struct  {
	//head: FRP
	char  plaintext_head[3];
	//PID : ocean
	char  plaintext_pid[5]; 
	
	//request owner:factoryx/customer/toolxxxx
	char  plaintext_owner[8]; 
	
	//request owner:chinaxxx/usaxxxxx
	char  plaintext_country[8]; 
	
	//bit7-6: head: AU,
	//bit5-4: ff(flash forever)/nn
	//bit3-2: wr/ro for critical partion
	//bit1-0: wr/ro for normal partion 
	char  plaintex_lock_auth[8]; 
	
	//sn number
	char  plaintex_sn[8]; 
	//imei1 number:E+15bits
	char  plaintex_imei1[16];
	//ime2 number:E+15bits
	char  plaintex_imei2[16];   
	
	//reserved 3bytes
	char  reserved_data[24]; 
	}pd_plaintext_struct;

#endif
