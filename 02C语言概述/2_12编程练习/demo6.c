/**
*@file demo6.c
*@brief  
*@author Tang
*@date 2022-09-21
*@return 
*@desc 
6.编写一个程序，创建一个整型变量toes，并将toes设置为10。程序中还
要计算toes的两倍和toes的平方。该程序应打印3个值，并分别描述以示区
分。
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
    
int main(int argc,char *argv[])
{
    int toes = 10;
    printf("toes = %d, toes * 2 = %d, toes * toes = %d\n",toes, toes * 2,toes * toes);
    
   return 0;
}

