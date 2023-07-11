/*fibnoci series by iterative*/

#include<stdio.h>

int main(){
    int a=0,b=1,c,i,n;
    printf("enter number to which you want fibnoci\n");
    scanf("%d",&n);
    printf("fibnoci series are\n ");
    for (i=0;i<=n;i++)
    {
        printf("%d ",c);
        c=a+b;
        a=b;
        b=c;

    }
    return 0;
}