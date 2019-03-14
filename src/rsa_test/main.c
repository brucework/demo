#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "rsa.h"


/**
 * Generate the public & private key file.
 */
void genkeyfile(_RSA key)
{
	char data[128];
	FILE *fd;

	fd = fopen("public.key", "wb+");

	fwrite(&key.n, 4, 1, fd);
	fwrite(&key.e, 4, 1, fd);
	fclose(fd);

	fd = fopen("private.key", "wb+");
	fwrite(&key.n, 4, 1, fd);
	fwrite(&key.d, 4, 1, fd);

	fclose(fd);

}

void getkey( _RSA *key, char *name, enum KEY_TYPE type)
{
	FILE *fd;

	fd = fopen(name, "r");

	fread(&key->n, 4, 1, fd); 
	printf("public n:%d\n",key->n);
	
	switch(type)
	{
		case PUBLIC:
			fread(&key->e, 4, 1, fd); 
			printf("public e:%d\n", key->e);
			break;
		case PRIVATE:
			fread(&key->d, 4, 1, fd); 
			printf("private d: %d\n",key->d);
			break;
		define:
		printf("type error!\n");
	}

	fclose(fd);

	key->bytes = 3;
}

void genciphertext(int *buf, int lens , char *name)
{
	FILE *fd;
	
	int head = 0xffff;
	
	fd = fopen(name, "wb");

	fwrite(&head, 4, 1, fd);
	for(int i = 0; i < lens; i++)
	{
		fwrite(&buf[i], 4, 1, fd);
	}

	fclose(fd);
}

int readciphertext(int buf[], char *name)
{
	FILE *fd;
	int ret;

	fd = fopen(name, "r");

	ret = fread(buf, 4, 32, fd);

	fclose(fd);

	return ret;
}

/**
 * Main method to demostrate the system. Sets up primes p, q, and proceeds to encode and
 * decode the message given in "text.txt"
 */
int main(void) {
	int bytes, len;
	int *encoded, *decoded;
	char buffer[] = "frp";
//	char *buffer = "frpOCEAN12345678authRWRWsvnCHINA000000000000000";
	int data[128];
	FILE *f, *pubf, *prvf;
	_RSA key;
	srand(time(NULL));
	bytes = 3;
	key.bytes = bytes;
	key.e = 887;
	key.n = 1523 * 9277;
	key.d = 13704239;
	//genkeyfile(key);
	int a = 0;
	a = strlen(buffer) +1;
	len = ((a - a%bytes)/bytes + 1) * bytes;
	
	printf("%s, lens:%d, readlen:%d\n",buffer, (int)strlen(buffer), len);
	//getkey(&key, "public.key", PUBLIC);

	printf("File \"text.txt\" read successfully, %d bytes read. Encoding byte stream in chunks of %d bytes ... ", len, bytes);

	encoded = encodeMessage(len, key.bytes, buffer, key.e, key.n);
	printf("\nEncoding finished successfully ... ");

	genciphertext(encoded, len/key.bytes, "ciphertext.rsa");

	len = readciphertext(data, "ciphertext.rsa");
	printf("\n===lens:%d\n", len);
	for(int i = 0; i < len; i++)
	{
		printf("%d\t",data[i]);
	}
	printf("\n");

	getkey(&key, "private.key", PRIVATE);
	printf("Decoding encoded message ... ");

	decoded = decodeMessage(len , key.bytes, encoded, key.d, key.n);
	printf("\nFinished RSA demonstration!\n");
	for(int i = 0; i <len*bytes ; i++)
	{
		printf("%c",decoded[i]);
	}
	printf("\n");

	free(encoded);
	free(decoded);
	return EXIT_SUCCESS;
}
