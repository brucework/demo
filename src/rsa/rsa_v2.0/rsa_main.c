#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "rsa_lib.h"
#include "prime_number.h"
#include <unistd.h>
//#include <windows.h>

#define MAX_NAME_LEN 32	
#define TRUE 1	
#define FALSE 0	 

//plain text format
typedef  struct  {
	char  filename_key[MAX_NAME_LEN];
	char  filename_outct[MAX_NAME_LEN];
	char  filename_outcb[MAX_NAME_LEN]; 
	char  filename_outpt[MAX_NAME_LEN]; 
	char  filename_inptext[MAX_NAME_LEN];
	char  filename_inctext[MAX_NAME_LEN];
	char  filename_inpubkey[MAX_NAME_LEN];
	char  filename_inprikey[MAX_NAME_LEN];
	char  filename_pressure_result[MAX_NAME_LEN];
	}name_para_struct;

typedef struct input_cmd_type{
	char index;
	char flag;
	char *cmd_type;
	char *cmd_para;
}match_cmd_t;


/**
*Generate rand key with p/q prime selection
*input para : 
*		(0)key pointer
*/
void genrandkey(_RSA *key){

	int p,q;	
	do{
		sleep(1);
		srand(time(NULL));
		p = prime_number_array[rand() % SINGLE_MAX];
		sleep(1);
		srand(time(NULL));
		q = prime_number_array[rand() % SINGLE_MAX];
		}while(p==q);
    genkey(p, q, key);
}

/**
*Generate public and private key file 
*input para : 
*		(0)key 
*   (1)key file name
*/
int genkeyfile(_RSA key,char *key_name){

	char pubdata[64];
	char pridata[64];
	FILE *fd;

  if(NULL==key_name){
		printf("===ERROR!!!: key name == null\n");
	  return -1;	
	}

	sprintf(pubdata, "%s%s", key_name,".public.key");
	fd = fopen(pubdata, "wb+");
	if(NULL==fd){
		printf("===ERROR!!!: can't fopen %s file\n",pubdata);
		return -1;	
	}
	fwrite(&key.n, 4, 1, fd);
	fwrite(&key.e, 4, 1, fd);
	#ifdef RSA_DEBUG		 
	printf("public n:%d\n", key.n);
	printf("public e:%d\n", key.e);
	#endif

	fclose(fd);
	
	sprintf(pridata, "%s%s", key_name,".private.key");
	fd = fopen(pridata, "wb+");
	if(NULL==fd){
		printf("===ERROR!!!: can't fopen %s file\n",pridata);
		return -1;	
	}
	fwrite(&key.n, 4, 1, fd);
	fwrite(&key.d, 4, 1, fd);
	#ifdef RSA_DEBUG		 
	printf("private n:%d\n", key.n);
	printf("private d:%d\n", key.d);
	#endif
	
	fclose(fd);
	
	return 0;
}

/**
*get key from key file
*input para : 
*		(0)key pointer
*   (1)key file name
*   (2)key file type :public or private
*/
int getkey( _RSA *key, char *name, enum KEY_TYPE type){

	FILE *fd;

	if(NULL==name){
     printf("===ERROR!!!: getkey name null");
     return -1;
  }   
  
	fd = fopen(name, "r");
  if(fd==NULL){
     printf("===ERROR!!!: can't open key file\n");
     return -1;
  }
  
	fread(&key->n, 4, 1, fd); 
	#ifdef RSA_DEBUG		 
	printf("get public key-n:%d\n", key->n);
	#endif
	
	switch(type)
	{
		case PUBLIC:
			fread(&key->e, 4, 1, fd); 
			#ifdef RSA_DEBUG		 
			printf("get public key-e:%d\n", key->e);
			#endif
		break;
		
		case PRIVATE:
			fread(&key->d, 4, 1, fd); 
			#ifdef RSA_DEBUG		 
			printf("get private key-d: %d\n",key->d);
			#endif
		break;
		
		default:
		printf("===ERROR!!!: getkey type error!\n");
		break;
	}

	fclose(fd);

	key->bytes = RSA_KEY_BYTES;
	return 0;
}

/**
*generate output file
*input para : 
*		(0)contain text
*   (1)key file name
*   (2)key file type :public or private
*/
int gentext(void *buf, char *name, enum FILE_TYPE type){

	FILE *fd;
	int ret=0,size=0,count=0;
	
	if((NULL==buf) || (NULL==name)){
		printf("===ERROR!!!: gentext NULL pointer\n");
		return -1;
	}

	fd = fopen(name, "wb");
  if(fd==NULL){
		printf("===ERROR!!!: gentext can't open %s file\n",name);
		return -1;
  }
  
  switch(type)
	{
		case CIPHERTEXT:
			count=CIPHER_TEXT_SIZE;
			size=4;
		break;
		
		case PLAINTEXT:
			count=sizeof(pd_plaintext_struct)/sizeof(char);
			size=1;
		break;
		
		default:
			printf("===ERROR!!!: readtext type error!\n");
			ret=-1;
		break;
	}

	ret=fwrite(buf, size, count, fd);
	if((ret==0) || (ret >count)){
		printf("===ERROR!!!: readtext read error!\n");
		ret=-1;
	}	
	else
		 ret=0;
	fclose(fd);
	
	return ret;
}


/**
*read text 
*input para : 
*		(0)return buffer pointer
*   (1)key file name
*   (2)key file type :public or private
*/
int readtext(void *buf, char *name, enum FILE_TYPE type){

	FILE *fd;
	int ret=0,size=0,count=0;

  if((NULL==buf) || (NULL==name)){
		printf("===ERROR!!!: readtext NULL pointer\n");
		return -1;
  }

	fd = fopen(name, "r");
  if(fd==NULL){
		printf("===ERROR!!!: readtext can't open %s file\n",name);
		return -1;
  }
	
	switch(type)
	{
		case CIPHERTEXT:
			count=CIPHER_TEXT_SIZE;
			size=4;
		break;
		
		case PLAINTEXT:
			count=sizeof(pd_plaintext_struct)/sizeof(char);
			size=1;
		break;
		
		default:
			printf("===ERROR!!!: readtext type error!\n");
			ret=-1;
		break;	
	}
  //int type data .
	ret = fread(buf, size, count, fd);
	if((ret==0) || (ret >count)){
		printf("===ERROR!!!: readtext read error!\n");
		ret=-1;
	}	
	else
		ret=0;
		
	fclose(fd);

	return ret;
}


/**
*generate test report 
*input para : 
*		(0)report name 
*   (1)RSA key
*   (2)input test text
*   (3)test result
*   (4)test result
*/
int gen_pressure_result(char *result_file_name,_RSA key, char *test_text, int pass,int failed){

	char filedata[512*2]={0};
	FILE *fd;

	//int status=0;
  if(NULL==result_file_name){
		printf("===ERROR!!!: result_file_name == null\n");
	  return -1;	
	}

	fd = fopen(result_file_name, "wb+");
	if(NULL==fd){
		printf("===ERROR!!!: can't fopen %s file\n",result_file_name);
		return -1;	
	}

	sprintf(filedata," \
	Key Pressure Test Report \n\n \
	Public__key: key.n=%d key.e=%d \n \
	Private_key: key.n=%d key.d=%d \n\n \
	Test_text: %s \n\n \
	Test_success: %d \n \
	Test_failed: %d \n", 
	key.n,key.e,key.n,key.d,test_text,pass,failed);

	fwrite(filedata, strlen(filedata), 1, fd);	
	fclose(fd);
	
	return 0;
}

/**
*generate cipher text
*input para : 
*		(0)output cipher text file name
*   (1)input plain text file name
*   (2)input public key file name
*   
* {2,0,"--outct",    input_name->filename_outct},
* {3,0,"--inptext",  input_name->filename_inptext},
* {4,0,"--inpubkey", input_name->filename_inpubkey},
*/
int generate_cipher_text(char* output_cipher_file,char* input_plaintext_file,char* input_public_key){

	_RSA key;
	int *encoded;
	int len;
	char buffer[sizeof(pd_plaintext_struct)/sizeof(char)+1]={0};
	int a1, a2;
	int status=0;

	status=getkey(&key, input_public_key, PUBLIC);
	if(status!=0){
		printf("===ERROR!!!: getkey failed");
		return -1;
	}

  status=readtext(buffer,input_plaintext_file,PLAINTEXT);
  if(status!=0){
		printf("===ERROR!!!: read plain text error");
		return -1;
	}
  
	key.bytes = RSA_KEY_BYTES;
	a1 = strlen(buffer);
	a2 = ((a1 - a1%key.bytes)/key.bytes + 1) * key.bytes;
	len = a2;
	
	printf("\nEncoding encoded message ...=%d \n",a1);
	printf("Encoding buffer:%s\n",buffer);

	printf("\nEncoding text code:  ");
	encoded = encodeMessage(len, key.bytes, buffer, key.e, key.n);
	if(NULL==encoded){
			printf("===ERROR!!!: encodeMessage failed");
			return -1;
	}
	printf("\nEncoding finished successfully ... \n");
	
  status=gentext(encoded, output_cipher_file,CIPHERTEXT);
 	if(status!=0){
		printf("===ERROR!!!: generate chiper text failed");
		return -1;
	}
	free(encoded);
  encoded=NULL;
  return 0;
}

/**
*generate cipher text
*input para : 
*		(0)output plain text file name
*   (1)input cipher text file name
*   (2)input private key file name
*   
* {5,0,"--outpt",    input_name->filename_outpt},
* {6,0,"--inctext",  input_name->filename_inctext},
* {7,0,"--inprikey", input_name->filename_inprikey},
*/
int get_plain_text(char* output_plain_file,char* input_ciphertext_file,char* input_private_key){

	_RSA key;
	char *decoded=NULL;
	int len;
	int buffer[CIPHER_TEXT_SIZE+1]={0};
	int a1, a2;
	int status=0;
	
	status=getkey(&key, input_private_key, PRIVATE);
	if(status!=0){
		printf("===ERROR!!!: getkey failed");
		return -1;
	}
       
  status=readtext(buffer,input_ciphertext_file,CIPHERTEXT);
  if(status!=0){
		printf("===ERROR!!!: read cipher text error");
		return -1;
	}
  
  
  key.bytes = RSA_KEY_BYTES;
	a1 = sizeof(pd_plaintext_struct)/sizeof(char);
	a2 = ((a1 - a1%key.bytes)/key.bytes + 1) * key.bytes;
	len = a2;
	
	printf("\n Decoding encoded message. ... \n");
	printf("decoding buffer:");
	decoded = decodeMessage(len/key.bytes, key.bytes, buffer, key.d, key.n);
	if(NULL==decoded){
		printf("===ERROR!!!: encodeMessage failed");
		return -1;
	}
	printf("\n Finished RSA demonstration!\n");
	
  status=gentext((char*)decoded, output_plain_file,PLAINTEXT);
 	if(status!=0){
		printf("===ERROR!!!: generate plain text failed");
		return -1;
	}

	free(decoded);
  decoded=NULL;
  return 0;
}

/**
*generic RSA test
*
*Main method to demostrate the system. 
* ST1:Sets up primes p, q, 
* ST2:proceeds to encode
* ST3:decode the message
*/
int test_main(void) {

	_RSA key;
	int len,a1, a2;
	int *encoded=NULL;
	char *decoded=NULL;
	
	char ciphertextname[] = {"test_ciphertext.bin"};
	char test_name[]={"test_key"};
	//static test text
	char *buffer = {"FRPocean"
									"customer"
									"chinaxxx"
									"AUffroro"
									"SNxxxxxx"
									"Exxxxxxxxxxxxxxx"
									"Exxxxxxxxxxxxxxx"
									"zzzzzzzzzzzzzzzzzzzzzzzz"};
									
  #if 0
  	genrandkey(&key);
  #else
		//static test key
		key.e = 887;
		key.n = 1523 * 9277;
		key.d = 13704239;
		key.bytes=RSA_KEY_BYTES;
	#endif
	genkeyfile(key,test_name);

	a1 = strlen(buffer);
	a2 = ((a1 - a1%key.bytes)/key.bytes + 1) * key.bytes;
	len = a2;
	
	printf("\n===Encoding encoded message[len=%d] ...",a1);
	printf("\n   Encoding buffer:%s\n",buffer);
	printf("\n   Generate cipher text code:  ");
	encoded = encodeMessage(len, key.bytes, buffer, key.e, key.n);
	printf("\nEncoding finished successfully ... \n");
  gentext(encoded, ciphertextname,CIPHERTEXT);

	printf("\n===Decoding encoded message. ...");
	printf("\n   Decoding buffer:");
	decoded = decodeMessage(len/key.bytes, key.bytes, encoded, key.d, key.n);
	printf("\nDecoding finished successfully ... \n");
 	printf("\nFinished RSA demonstration!\n");
	free(encoded);
	free(decoded);
	encoded=NULL;
	decoded=NULL;
	return EXIT_SUCCESS;
}

/**
*RSA key pressure test
*
* Encode and decode 10000 times  
* with generate key
* for 26 letters and numbers
*/
int key_pressure_test(char* test_result,char* input_publick_key,char* input_private_key){

	int len,a1, a2,status=-1;
  int test_number=0,pass_number=0;
	int *encoded=NULL;
	char *decoded=NULL;
		_RSA key;
		
	//pressure test key (26*2+10)*8=496
	char *test_buffer = {"QQQQQQQQqqqqqqqqWWWWWWWWwwwwwwwwEEEEEEEEeeeeeeeeRRRRRRRRrrrrrrrr"
												"TTTTTTTTttttttttYYYYYYYYyyyyyyyyUUUUUUUUuuuuuuuuIIIIIIIIiiiiiiii"
												"OOOOOOOOooooooooPPPPPPPPppppppppAAAAAAAAaaaaaaaaSSSSSSSSssssssss"
												"DDDDDDDDddddddddFFFFFFFFffffffffGGGGGGGGggggggggHHHHHHHHhhhhhhhh"
												"JJJJJJJJJJJJjjjjKKKKKKKKkkkkkkkkLLLLLLLLLLLLllllZZZZZZZZzzzzzzzz"
												"XXXXXXXXxxxxxxxxCCCCCCCCccccccccVVVVVVVVvvvvvvvvBBBBBBBBbbbbbbbb"
												"NNNNNNNNnnnnnnnnMMMMMMMMmmmmmmmm11111111222222222222333344444444"
												"55555555666666667777777788888888999999999000000000"};

 	status=getkey(&key, input_publick_key, PUBLIC);
 	if(status!=0){
		printf("===ERROR!!!:%s  getkey input_public_key",__func__);
		return -1;
	}
 	status=getkey(&key, input_private_key, PRIVATE);
 	if(status!=0){
		printf("===ERROR!!!:%s  getkey input_public_key",__func__);
		return -1;
	}
	
	key.bytes=RSA_KEY_BYTES;

	a1 = strlen(test_buffer);
	a2 = ((a1 - a1%key.bytes)/key.bytes + 1) * key.bytes;
	len = a2;
	
	#if 0
	printf("%s Key-q=%d\n", __func__, key.q);
	printf("%s key-p=%d\n", __func__, key.p);
	printf("%s key-e=%d\n", __func__, key.e);
	printf("%s key-d=%d\n", __func__, key.d);
	printf("%s key-n=%d\n", __func__, key.n);
	printf("%s key-bytes=%d\n", __func__, key.bytes);
	printf("%s len=%d\n", __func__, key.bytes);
	#endif
	
	for(test_number=0;test_number<10000;test_number++){
	
	printf("\n===Encoding encoded message[len=%d] ...",a1);
	printf("\n   Encoding test_buffer:%s\n",test_buffer);
	printf("\n   Generate cipher text code:  ");
	encoded = encodeMessage(len, key.bytes, test_buffer, key.e, key.n);
	printf("\nEncoding finished successfully ... \n");

	printf("\n===Decoding encoded message. ...");
	printf("\n   Decoding test_buffer:");
	decoded = decodeMessage(len/key.bytes, key.bytes, encoded, key.d, key.n);
	printf("\nDecoding finished successfully ... \n");
 	printf("\nFinished RSA demonstration!\n");
 	
 	if(strncmp(test_buffer,decoded,sizeof(test_buffer)/sizeof(char))==0)
		pass_number++;
 
	free(encoded);
	free(decoded);
	encoded=NULL;
	decoded=NULL;
	
	}

	gen_pressure_result(test_result,key,test_buffer,pass_number,test_number-pass_number);
	return 0;
}

/**
* Deamom help-2
*
* Printf plain text struct 
*/
void print_plain_text_format(void){

printf("\n /****************************  \
				\n plaintext_struct  \
				\n ****************************/  \
				\n plaintext_head[3] \
				\n plaintext_pid[5]:ocean \
				\n plaintext_request_owner[8]:fatcory/custom/tool \
				\n plaintext_sale_country[5]:china/usa \
				\n plaintext_lock_auth[8];\
				\n 		->bit7-6 head: AU \
				\n 		->bit5-4 ff(flash forever)\
				\n 		->bit3-2 critical partion \
				\n 		->bit1-0 normal partion auth \
				\n plaintext_sn[8] \
				\n plaintext_imei1[16] \
				\n plaintext_imei2[16] \
				\n reserved_data[24] \
				\n");
}
 
/**
* Deamom help-1
*
* printf usage
*/ 
int tool_usage(const char* programName){

    printf( "Usage :\n");
    printf( "      %s [args]\n\n", programName);
    
    printf( "Arguments :\n");
    printf("--help     : get help \
					\n--test     : get rsa test \
				  \n--getptf   : get plain text format \n\
					\n--genkey   : generate key	\
					\n===Eg: ./rsa_main --genkey\n \
					\n--outct    : output para->cipher text file name \
					\n--outcb    : output para->block format test bin name \
					\n--inptext  : input  para->plain text file name \
					\n--inpubkey : input  para->public key file name \
					\n===Eg: ./rsa_main --outct xxxx  --inptext xxx --inpubkey xxx\n \
					\n--outpt    : output para->plain text file name\
					\n--inctext  : input  para->cipher text file name \
					\n--inprikey : input  para->private key file name \
					\n===Eg: ./rsa_main --outpt xxxx  --inctext xxxx --inprikey xxxx\n \
					\n--pressuretest: output para->result file name\
					\n===Eg: ./rsa_main --pressuretest resultxxxx--inpubkey xxxx --inprikey xxxx\n");
    return 0;
}

/**
* Main deamom 
*/ 
int main(int argc, char *argv[]){

	int argNb;
	int	i,j;		
	int status=0;
	name_para_struct *input_name = NULL;
	const char* const programName = argv[0];

	input_name=malloc (sizeof(name_para_struct)*sizeof(char));
	memset(input_name,0,sizeof(char)*sizeof(name_para_struct));

	match_cmd_t input_cmd_array[] ={
		  {0,0,"--genkey",   input_name->filename_key},
		  {1,0,"--outcb",    input_name->filename_outcb},
		  {2,0,"--outct",    input_name->filename_outct},
		  {3,0,"--inptext",  input_name->filename_inptext},
		  {4,0,"--inpubkey", input_name->filename_inpubkey},
		  {5,0,"--outpt",    input_name->filename_outpt},
		  {6,0,"--inctext",  input_name->filename_inctext},
		  {7,0,"--inprikey", input_name->filename_inprikey},
		  {8,0,"--pressuretest", input_name->filename_pressure_result},
	};

	#if 0
	for(i = 0; i < sizeof(input_cmd_array)/sizeof(match_cmd_t); i++){
    printf( "argv[%d]=%s\n", i,input_cmd_array[i].cmd_type);
  }

	for (i = 0; i < argc; i++)
		printf( "argv[%d]=%s\n", i,argv[i]);
	#endif	



/*decoding command and para***************/

    //The first round,find fast command (no para)
    for (argNb=1; argNb<argc; argNb++) {
			if (!strcmp(argv[argNb], "--help")){
	 			tool_usage(programName);
				return 0;
			}
			else if (!strcmp(argv[argNb], "--test")){
				test_main();
				return 0;
			}
			else if (!strcmp(argv[argNb], "--getptf")){
				print_plain_text_format();
				return 0;
			}
	  }
	 	tool_usage(programName);
    //The second round, match command and copy para
		for (argNb=1; argNb<argc; argNb++) {
			for(i = 0; i < sizeof(input_cmd_array)/sizeof(match_cmd_t); i++){
				//find command
				if (!strcmp(argv[argNb], input_cmd_array[i].cmd_type)){
					//check wether it has para or not.
					if((argNb+1)<= (argc-1)){
						if(strncmp(argv[argNb+1],"-",sizeof(char))){
							strncpy(input_cmd_array[i].cmd_para,argv[argNb+1],strlen(argv[argNb+1]));
							input_cmd_array[i].flag=TRUE;
							#ifdef RSA_DEBUG	
							printf("find name[%s]=%s\n",input_cmd_array[i].cmd_type,input_cmd_array[i].cmd_para);
		          #endif
						}
						else{
							printf("===ERROR!!!: file name para(-xxxx) isn't supported");
						}
					}	
					else	
						printf("===ERROR!!!: can't find %s command para",input_cmd_array[i].cmd_type);
				}
			}
		}


/*Exe command*******************************/
    
    //For gen key file
		// {0,0,"--genkey",   input_name->name_key},
		if(input_cmd_array[0].flag==TRUE){
			_RSA key;
			
			genrandkey(&key);
			
			#ifdef RSA_DEBUG		 
			printf("\n***printf key start***\n");
			#endif
			
		  status=genkeyfile(key,input_cmd_array[0].cmd_para);
		  if(status!=0)
		  	goto Exit;
	
			#ifdef RSA_DEBUG		 
			printf("\n***printf key end***\n");
			#endif
		}

  //For cipher text
  //{1,0,"--outcb",    input_name->filename_outcb},
  //{2,0,"--outct",    input_name->filename_outct},
  //{3,0,"--inptext",  input_name->filename_inptext},
  //{4,0,"--inpubkey", input_name->filename_inpubkey},
	if(input_cmd_array[2].flag==TRUE){
		if((input_cmd_array[3].flag==TRUE) && (input_cmd_array[4].flag==TRUE)){
			status=generate_cipher_text(input_cmd_array[2].cmd_para,input_cmd_array[3].cmd_para,input_cmd_array[4].cmd_para);
			if(status!=0)
		  	goto Exit;
		}
		else
			printf("===ERROR!!!:Can't find input parameter for inptext and inpubkey\n");
	}
  //For plain text
	//{5,0,"--outpt",    input_name->filename_outpt},
	//{6,0,"--inctext",  input_name->filename_inctext},
	//{7,0,"--inprikey", input_name->filename_inprikey},
	if(input_cmd_array[5].flag==TRUE){
		if((input_cmd_array[6].flag==TRUE) && (input_cmd_array[7].flag==TRUE)){
			status=get_plain_text(input_cmd_array[5].cmd_para,input_cmd_array[6].cmd_para,input_cmd_array[7].cmd_para);
			if(status!=0)
		  	goto Exit;
		}
		else
			printf("===ERROR!!!:Can't find input parameter for inctext and inprikey\n");
	}

	//{8,0,"--pressuretest", input_name->filename_pressure_result},
	//{4,0,"--inpubkey", input_name->filename_inpubkey},
	//{7,0,"--inprikey", input_name->filename_inprikey},
	if(input_cmd_array[8].flag==TRUE){
		if((input_cmd_array[4].flag==TRUE) && (input_cmd_array[7].flag==TRUE)){
			status=key_pressure_test(input_cmd_array[8].cmd_para,input_cmd_array[4].cmd_para,input_cmd_array[7].cmd_para);
			if(status!=0)
		  	goto Exit;
		}
		else
			printf("===ERROR!!!:Can't find input parameter for inpubkey and inprikey\n");
	}
	
Exit:
	free(input_name);
	input_name=NULL;
	return status;
}
















