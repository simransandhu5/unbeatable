#include <stdio.h>

int takenumber()
{
    int i;
    printf("enter a number ");
    scanf("%d",&i);
    return i;
}
int main ()
{
    int c;
    
    c=takenumber();
    printf("the number enter ia%d\n",c);
        return 0;
}