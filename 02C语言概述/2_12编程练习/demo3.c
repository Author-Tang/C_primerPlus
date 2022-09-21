/**
*@file demo3.c
*@brief  
*@author Tang
*@date 2022-09-21
*@return 
*@desc 
3.编写一个程序把你的年龄转换成天数，并显示这两个值。这里不用考
虑闰年的问题。
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
    int age;
    printf("请输入你的年龄:\n");
    scanf("%d",&age);
    printf("%d 年龄= %d天\n",age, age*365);
    
   return 0;
}

