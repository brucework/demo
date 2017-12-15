#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/shm.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include <debug.h>
#include <shmdata.h>

typedef unsigned long long uint64;
typedef long long int64;

#define DEF_PORT    8888
extern char * optarg;
int flags = 0;  /* server or client */

void help()
{
    printf("network[command]\n \
    -s  ; run socket server\n \
    -c  ; run socket bind\n \
    -p  ; set the port\n \
    -h  ; print help information\n");

    printf("EAG: network -s -p 8888\n");

    return;
}

int net_server(unsigned int port)
{
    int ret = 0;
    int sockfd;
    struct sockaddr_in addr;

    info("%s() port:%d\n",__func__, port);

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if(sockfd < 0)
    {
        err("socket\n");
        ret = sockfd;
        goto exit;
    }

    bzero(&addr, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port = htons(port);
    addr.sin_addr.s_addr = htonl(INADDR_ANY);

    ret = bind(sockfd, (struct sockaddr*)&addr, sizeof(addr));
    if(ret != 0)
    {
        err("binding\n");
        close(sockfd);
        goto exit;
    }

    ret = listen(sockfd, 10);
    if(ret != 0)
    {
        err("listen\n");
        close(sockfd);
        goto exit;
    }

    sleep(1);

    info("listen client @port=%d \n", port);
    int i = 0;
    while(1)  
    {     

        struct sockaddr_in client_addr;          
        char cli_ip[INET_ADDRSTRLEN] = "";       
        socklen_t cliaddr_len = sizeof(client_addr);      

        int connfd;  
        connfd = accept(sockfd, (struct sockaddr*)&client_addr, &cliaddr_len);         
        if(connfd < 0)  
        {  
            err("accept");  
            continue;  
        }  

        inet_ntop(AF_INET, &client_addr.sin_addr, cli_ip, INET_ADDRSTRLEN);  
        printf("-----------%d------\n", ++i);  
        printf("client ip=%s,port=%d\n", cli_ip,ntohs(client_addr.sin_port));  

        char recv_buf[512] = {0};

        while(1)
        if( recv(connfd, recv_buf, sizeof(recv_buf), 0) > 0  )  
        {  
            printf("recv data ==%s\n",recv_buf);  
            //break;  
        }  

        close(connfd);     //关闭已连接套接字  
        //printf("client closed!\n");  
    }  
    close(sockfd);         //关闭监听套接字 

exit:
    return ret;
}

int net_client(unsigned int port)
{
    int ret = 0;
    char *server_ip = "127.0.0.1";
    int sockfd;
    struct sockaddr_in server_addr;

    info("%s() port:%d\n",__func__, port);

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if(sockfd < 0)
    {
        err("socket\n");
        goto exit2;
    }

    bzero(&server_addr, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(port);
    inet_pton(AF_INET, server_ip, &server_addr.sin_addr);

    ret = connect(sockfd, (struct sockaddr*)&server_addr,sizeof(server_addr));
    if(ret != 0)
    {
        err("connect\n");
        close(sockfd);
        goto exit2;
    }
    printf("ret ========= %d\n", ret);

    char send_buf[100]="this is for test";
    int j = 0;

    for(j = 0; j < 100; j++)
    {
        sleep(1);
        printf("j=%d\n", j);
        send(sockfd, send_buf, strlen(send_buf), 0);   // 向服务器发送信息
    }
    close(sockfd);

exit2:
    return ret;
}

int start_server(int flags, int port)
{
    int ret = 0;

    switch(flags){
        case 1:
            ret = net_server(port);
            break;
        case 2:
            ret = net_client(port);
            break;
        default:
            break;
    }

    return ret;
}

int main(int argc, char **argv)
{
    int ret = 0;
    int i = 0;
    unsigned int port = 0;
    char ch;

//  info("argc:%d\n", argc);
//  for(i = 0; i < argc; i++)
//  {
//      info("argv[%d]:%s\n", i, argv[i]);
//  }

    if(argc > 5)
    {
        printf("command error!\n");
        ret = -1;
        goto exit;
    }

    while((ch = getopt(argc, argv, "Sp:Cp:h")) != EOF){
        printf("%c\n",ch);
        switch(ch)
        {
            case 'S':
                //printf("server\n");
                flags = 1;
                break;
            case 'C':
                //printf("client \n");

                flags = 2;
                break;
            case 'h':
                printf("help information\n");
                goto exit;
                break;
            case 'p':
                if(optarg == NULL)
                    port = DEF_PORT;
                else
                    port = atoi(optarg);
                break;
            default:
                break;
        }
    }

    ret = start_server(flags, port);
    if(ret < 0)
        err("start_server error\n");

    return ret;
exit:
    help();
    return ret;
}
