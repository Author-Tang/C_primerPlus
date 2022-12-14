/**
*@file demo4.c
*@brief  
*@author Tang
*@date 2022-09-21
*@return 
*@desc 
4.编写一个程序，生成以下输出：
For　he's　a　jolly　good　fellow!
For　he's　a　jolly　good　fellow!
For　he's　a　jolly　good　fellow!
Which　nobody　can　deny!
除了 main()函数以外，该程序还要调用两个自定义函数：一个名为jolly()，
用于打印前 3 条消息，调用一次打印一条；另一个函数名为deny()，
打印最后一条消息。
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
    
void jolly();
void deny();
int main(int argc,char *argv[])
{
    jolly();
    jolly();
    jolly();
    deny();

    
   return 0;
}

void jolly()
{
    printf("For he's a jolly good fellow!\n");
}

void deny()
{
    printf("Which nobody can deny!\n");
}
