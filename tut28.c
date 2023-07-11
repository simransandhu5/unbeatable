#include <stdio.h>

int fib_recursive(int n)
{
    if(n==1 ||n==2){
        return n-1;
    }
    else{
    return fib_recursive(n-1)+fib_recursive(n-2);
    }
}
int fib_iterative(int n)
{
    int a=0,b=1,i,c;

    for ( i = 0; i < n-1; i++)
    {
        c=a+b;
        a=b;
        b=c;
 }
    
    return a;
}

int main()
{
    int number;
    printf("enter number to get fibnoci series\n");
    scanf("%d",&number);
    printf("value of fibnoci at position no %d using iterative approach is %d \n",number,fib_iterative(number));
    printf("value of fibnoci at position no %d using recursive approach is %d\n",number, fib_recursive(number));

    return 0;
}