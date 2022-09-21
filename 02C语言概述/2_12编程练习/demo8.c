/**
*@file demo8.c
*@brief  
*@author Tang
*@date 2022-09-21
*@return 
*@desc
8.在C语言中，函数可以调用另一个函数。编写一个程序，调用一个名
为one_three()的函数。该函数在一行打印单词“one”，再调用第2个函数
two()，然后在另一行打印单词“three”。two()函数在一行显示单词“two”。
main()函数在调用 one_three()函数前要打印短语“starting now:”，并在调用完
毕后显示短语“done!”。因此，该程序的输出应如下所示：
starting　now:
one
two
three
done!
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
    
void one();
void two();
int main(int argc,char *argv[])
{
    printf("starting now:\n");
    one();
    two();
    printf("three\n");
    printf("done!\n");
   return 0;
}

void one()
{
    printf("one\n");
}

void two()
{
    printf("two\n");
}
