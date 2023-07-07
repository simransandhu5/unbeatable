#include <stdio.h>

int main(){
    int i=1,num,mul,n;
    printf("enter number ");
    scanf("%d",&num);
    printf("to how many");
    scanf("%d",&n);
    while(i<=n)
    {
        mul=num*i;
        printf("%d * %d= %d\n",num,i,mul);
        i++;
    }return 0;
}