/**
*@file demo7.c
*@brief  
*@author Tang
*@date 2022-09-21
*@return 
*@desc 
7.许多研究表明，微笑益处多多。编写一个程序，生成以下格式的输
出：
Smile!Smile!Smile!
Smile!Smile!
Smile!
该程序要定义一个函数，该函数被调用一次打印一次“Smile!”，根据程
序的需要使用该函数。
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
    
void smile();

int main(int argc,char *argv[])
{
    smile();
    smile();
    smile();
    puts("\n");
    smile();
    smile();
    puts("\n");
    smile();
    puts("\n");
   return 0;
}

void smile()
{
    printf("Smile!");
}
