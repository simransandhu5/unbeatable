#include<stdio.h>

int main()
{
    printf("lets learn about pointer\n");
    int a=76;
    int* ptra=&a;
    printf("address of a is %x\n",ptra);
    printf("value of a is %d\n", *ptra);
    printf("the value of a is %d\n",a);
    return 0;
    }