#include<stdio.h>

int main()
{
    int sal;
    float t=0;
    printf("enter the sallery\n");
    scanf("%d",&sal);
    
             if (sal>=400000 && sal<=700000)
                { 
                    t=t+ 0;
                   
                }
             if(sal>700000 && sal<=1000000)
                {
                    t=t+ 5/100*(sal-100000);
                    
                }
             if(sal>1000000 && sal<=1400000)
                {
                    t=t+ 10/100*(sal-1400000);
                    
                }
             if (sal>1400000 && sal<=1800000)
                {
                    t=t+ 15/100*(sal-1800000);
                   
                } 
            if (sal>1800000)
                {
                    t= t+20/100*(sal-1800000);
                }
    
                 printf("income tax is %f \n", t);
                 return 0;
}