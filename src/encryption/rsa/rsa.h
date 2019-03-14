#include <stdio.h>
#include <stdbool.h>
#define MAX_NUM 63001
#define MAX_PRIME 251

//! 返回代码
#define OK 100
#define ERROR_NOEACHPRIME 101
#define ERROR_NOPUBLICKEY 102
#define ERROR_GENERROR 103

unsigned long long MakePrivatedKeyd( unsigned  long uiP, unsigned long uiQ );
unsigned long long GetPrivateKeyd( unsigned long long iWhich );
unsigned long long MakePairkey( unsigned long long uiP, unsigned long long uiQ, unsigned long long uiD );
unsigned long long GetPairKey( unsigned long long *d, unsigned long long *e );
void rsa_encrypt( long long n, long long e, char *mw, long long iLength, long long *cw );
void rsa_decrypt( long long n, long long d, long long *cw, long long cLength, char *mw );
void outputkey();
