/**
*@file fathm_ft.c
*@brief 把2音寻转换成英寸 
*@author Tang
*@date 2022-09-07
*@return 
*@desc 
*/

#include <stdio.h>
    
int main(int argc,char *argv[])
{
    int feet, fathoms;

    fathoms = 2;
    feet = fathoms * 6;

    printf("There are %d feet in %d fathoms!\n",feet, fathoms);
    printf("Yes, I said %d feet!\n",6 * fathoms);
    
   return 0;
}

