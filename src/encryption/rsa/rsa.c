//rsa.c

#include<stdio.h>
#include "rsa.h"
//!　保存私钥d集合
struct pKeyset
{
	unsigned long long set[ MAX_NUM ];
	unsigned long long size;
}pset;

//! 保存公、私钥对
struct pPairkey
{
	unsigned long long d;
	unsigned long long e;
	unsigned long long n;
}pairkey;

// 名称：isPrime
// 功能：判断两个数是否互质
//  参数：m: 数a; n: 数b
// 返回：m、n互质返回true; 否则返回false

bool isPrime( unsigned long long m, unsigned long long n )
{
	unsigned long long i=0;
	bool Flag = true;

	if( m<2 || n<2 )
		return false;

		unsigned long long tem = ( m > n ) ? n : m;
		for( i=2; i<=tem && Flag; i++ )
		{
			bool mFlag = true;
			bool nFlag = true;
			if( m % i == 0 )
				mFlag = false;
				if( n % i == 0 )
					nFlag = false;
					if( !mFlag && !nFlag )
						Flag = false;
		}
		if( Flag )
			return true;
			else
				return false;
}

// 名称：MakePrivatedKeyd
// 功能：由素数Q、Q生成私钥d
//  参数：uiP: 素数P; uiQ: 素数Q
// 返回：私钥d

unsigned long long MakePrivatedKeyd( unsigned long uiP, unsigned long uiQ )
{
	unsigned long long i=0;

	//! 得到所有与z互质的数( 私钥d的集合 )
	unsigned long long z = ( uiP -1 ) * ( uiQ -1 );
	pset.size = 0;
	for( i=0; i<z; i++ )
	{
		if( isPrime( i, z ) )
		{
			pset.set[ pset.size++ ] = i;
		}
	}

	return pset.size;
}

// 名称：MakePairKey
// 功能：生成RSA公、私钥对
//  参数：uiP: 素数P; uiQ: 素数Q; uiD: 私钥d
// 返回：错误代码

unsigned long long MakePairkey( unsigned long long uiP, unsigned long long uiQ, unsigned long long uiD )
{
	bool bFlag = true;
	unsigned long long i = 0, e;
	unsigned long long z = ( uiP-1 ) * ( uiQ-1 );
	unsigned long long d = pset.set[uiD];
	//d=uiD;

	if( !isPrime( z, d ) )
		return ERROR_NOEACHPRIME;

		for( i=2; i<z; i++ )
		{
			if( (i*d)%z == 1 )
			{
				e = i;
				bFlag = false;
			}
		}
		if( bFlag )
			return ERROR_NOPUBLICKEY;

			if( (d*e)%z != 1 )
				ERROR_GENERROR;

				pairkey.d = d;
				pairkey.e = e;
				pairkey.n = uiP * uiQ;
				return OK;
}

// 名称：GetPairKey
// 功能：对外提供接口，获得公、私钥对
//  参数：uiP: 素数P; uiQ: 素数Q; uiD: 私钥d
// 返回：

unsigned long long GetPairKey( unsigned long long *d, unsigned long long *e )
{
	*d = pairkey.d;
	*e = pairkey.e;
	return pairkey.n;
}

// 名称：GetPrivateKeyd
// 功能：对外提供接口，由用户选择ID得以私钥d
//  参数：iWhich: 用户选择私钥d的ID
// 返回：私钥d值

unsigned long long GetPrivateKeyd( unsigned long long iWhich )
{
	if( pset.size >= iWhich )
		return pset.set[ iWhich ];
		else
			return 0;
}

// 名称：rsa_encrypt
// 功能：RSA加密运算
//  参数：n: 公钥n; e: 公钥e; mw: 加密明文; iLength: 明文长度; cw: 密文输出
// 返回：无

void rsa_encrypt( long long n, long long e, char *mw, long long mLength, long long *cw )
{
	long long i=0, j=0;
	long temInt = 0;
	for( i=0; i<mLength; i++ )
	{
		temInt = mw[i];
		if( e!=0 )
		{
			for( j=1; j<e; j++ )
			{
				temInt = ( temInt * mw[i] ) % n;
			}
		}
		else
		{
			temInt = 1;
		}

		cw[i] = (long long)temInt;
	}
}

// 名称：rsa_decrypt
// 功能：RSA解密运算
//  参数：n: 私钥n; d: 私钥d; cw: 密文; cLength: 密文长度; mw: 明文输出
// 返回：无

void rsa_decrypt( long long n, long long d, long long *cw, long long cLength, char *mw )
{
	long long i=0, j=-1;
	long temInt = 0;

	for( i=0; i<cLength/4; ++i )
	{
		mw[i] = 0;
		temInt = cw[i];

		if( d != 0 )
		{
			for( j=1; j<d; j++ )
			{
				temInt = ( temInt * cw[i] ) % n;
			}
		}
		else
		{
			temInt = 1;
		}

		mw[i] = (char)temInt;
	}
}
void outputkey()
{
	printf("PublicKey(e,n): (%d,%d)\n",pairkey.e,pairkey.n);
	printf("PrivateKey(d,n): (%d,%d)\n",pairkey.d,pairkey.n);
}
