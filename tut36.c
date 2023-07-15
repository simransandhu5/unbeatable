#include <stdio.h>

void func1(int arg[])
{
    printf("string brfore reverse\n");
    for(int i =0;i<=5;i++)
    {
        printf("%d\n",arg[i]);
    }
   
    printf("after reverse\n");
    for(int j=5;j>=0;j--)
    {
        printf("%d\n",arg[j]);
    }
}
    int main()
    {
        int s1[]={1,2,3,4,5,6};
        func1(s1);
        return 0;
    }
