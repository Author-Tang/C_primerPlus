/**
*@file two_fun.c
*@brief 一个文件中包含多个函数 
*@author Tang
*@date 2022-09-07
*@return 
*@desc 
*/

#include <stdio.h>
    
void butler(void);  /*ANSI/ISO C函数原型*/

int main(int argc,char *argv[])
{
    printf("I will summon the butler function.\n");

    butler();

    printf("Yes. Bring me sone tea and writeable DVDs.\n");
    
   return 0;
}

void butler(void)   /*函数定义开始*/
{
    printf("You rang, sir?\n");
}

