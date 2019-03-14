#include "stdio.h"

int prime(int n){//素数判断
	int i;
	if((n>2 && !(n&1)) || n<2)
		return 0;
	for(i=3;i*i<=n;i+=2)
		if(!(n%i))
			return 0;
	return 1;
}
int main(int argv,char *argc[]){
	int n,s,t;
	printf("Input n(int 1<n<=500)...\nn=");
	if(scanf("%d",&n)!=1 || n<2 ){
		printf("Input error, exit...\n");
		return 0;
	}
	for(t=s=0; t<10 && n>1; n--)
		if(prime(n)){
			printf("%6d",n);
			s+=n;
			t++;
		}
	printf("\nsum = %d\n",s);
	return 0;
}
