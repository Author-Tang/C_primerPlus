/**
*@file demo5.c
*@brief  
*@author Tang
*@date 2022-09-21
*@return 
*@desc
5.编写一个程序，生成以下输出：
Brazil,　Russia,　India,　China
India,　China,
Brazil,　Russia
除了main()以外，该程序还要调用两个自定义函数：一个名为br()，调
用一次打印一次“Brazil, Russia”；另一个名为ic()，调用一次打印一次“India,
China”。其他内容在main()函数中完成。
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

void br();
void ic();
int main(int argc,char *argv[])
{
    br();
    ic();
    puts("\n");
    ic();
    puts("\n");
    br();
    
   return 0;
}

void br()
{
    printf("Brazil,Russia");
}

void ic()
{
    printf("India,China");
}
