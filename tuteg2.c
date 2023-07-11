#include<stdio.h>

int fib(int n)
{
    if (n<=1)
    return n;
    else 
    return (fib(n-1)+fib(n-2));


}
int main(){
    int a;
    printf("enter the number you want fibnoci\n");
    scanf("%d",&a);
    printf("fibnoci series is ");
    for (int i=0;i<=a;i++)
    {
        printf(" %d ",fib(i));
    }
    return 0;
}