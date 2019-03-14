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
	int len;
	int *encoded, *decoded;
	char *buffer = "frpOCEAN12345678authRWRWsvnCHINA000000000000000";
	int data[128];
	_RSA key;

	srand(time(NULL));

	key.bytes = 3;
	key.e = 887;
	key.n = 1523 * 9277;
	key.d = 13704239;

	genkeyfile(key);

	int a1, a2;
	a1 = strlen(buffer);

	a2 = ((a1 - a1%key.bytes)/key.bytes + 1) * key.bytes;
	len = a2;
	
	printf("Encoding encoded message ... \n");
	printf("buffer:%s\n",buffer);
	encoded = encodeMessage(len, key.bytes, buffer, key.e, key.n);
	printf("\nEncoding finished successfully ... \n\n");

	printf("Decoding encoded message ... \n");
	decoded = decodeMessage(len/key.bytes, key.bytes, encoded, key.d, key.n);

	printf("\nFinished RSA demonstration!\n\n");

	free(encoded);
	free(decoded);
	return EXIT_SUCCESS;
}
