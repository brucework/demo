#ifndef _RSA_H__

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * Define the public & private key.a
 */
enum KEY_TYPE
{
	PUBLIC,
	PRIVATE,
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

#define RSA_DEBUG

#define ACCURACY 5
#define SINGLE_MAX 10000
#define EXPONENT_MAX 1000
#define BUF_SIZE 1024

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
int* decodeMessage(int len, int bytes, int* cryptogram, int exponent, int modulus);

#endif
