#include<stdio.h>

void cal(int *x, int *y)
{
    int temp;
    temp =*x;
    *x=*x+*y;
    *y=temp-*y;
}
int main()
{
    int a=4, b=3;
    printf("enter value is  %d and %d \n",a,b);
    cal( &a , &b);
    printf("after addition  %d and subtraction %d",a,b);
    return 0;
}