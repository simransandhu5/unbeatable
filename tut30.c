#include <stdio.h>
int main()
{
     int input,n;
     char star='*';
     printf("for tiangle type 0\n and for reverse type 1\n enter");
     scanf("%d",&input);

     printf("enter number of rows");
     scanf("%d",&n);

    if (input==0)
    {
        printf("triangular star patterns\n");
        for (int i = 0; i < n; i++)
        {
            for (int j=0;j<=i;j++) 
            {
                printf("*");
            }
                printf("\n");
        }
        
    }
    else if (input==1)
    {
        printf("opposite triangle is \n");
        for (int i = n; i >=0 ; i--)
        {
            for (int j=0;j<=i;j++)
            {
                printf("*");
            }
               printf("\n");
        }
        
    }
         else 
         {
            printf("wrong input");
         }

    return 0;
}