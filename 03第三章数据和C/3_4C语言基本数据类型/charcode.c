/**
*@file charcode.c
*@brief  
*@author Tang
*@date 2022-11-07
*@return 
*@desc 显示字符的代码编号
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
    char ch;
    printf("Please enter a character.\n");
    scanf("%c",&ch);
    printf("The code for %c is %d.\n",ch,ch);

   return 0;
}

