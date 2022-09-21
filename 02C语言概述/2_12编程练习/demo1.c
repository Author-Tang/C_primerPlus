/**
*@file demo1.c
*@brief  
*@author Tang
*@date 2022-09-21
*@return 
*@desc
1.编写一个程序，调用一次 printf()函数，把你的姓名打印在一行。再调
用一次 printf()函数，把你的姓名分别打印在两行。然后，再调用两次printf()
函数，把你的姓名打印在一行。输出应如下所示（当然要把示例的内容换成
你的姓名）：
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
    printf("小明\n");
    printf("小\n明\n");
    printf("小");
    printf("明\n");
   return 0;
}

