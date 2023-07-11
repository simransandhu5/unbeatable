#include<stdio.h>

int main()
{
    float term;
    int act,i;

    while(1)
    {
    printf("press 1 for kms to miles\n");
    printf("press 2 for inches to foots\n");
    printf("press 3 for cms to inches\n");
    printf("press 4 for pounds to kgs\n");
    printf("press 5 for inches to meter\n");
    printf("enter conversion you want \n");
    scanf("%d",&act);
    switch (act)
    {
        case 1:
        printf("enter value of kms\n");
        scanf("%f",&term);
        printf("value of %f kms is %f miles\n",term,term*0.6213);
        break;
        case 2:
        printf("enter the value in inches\n");
        scanf("%f",&term);
        printf("value of %f inches is %f foots",term,term*0.0833);
        break;
        case 3:
        printf("enter the value in cms\n");
        scanf("%f",&term);
        printf("value of %f cms is %f inches",term,term*0.393);
        break;
        case 4:
        printf("enter the value in pounds\n");
        scanf("%f",&term);
        printf("value of %f pound is %f kgs",term,term*0.453);
        break;
        case 5:
        printf("enter the value in inches\n");
        scanf("%f",&term);
        printf("value of %f inches is %meter\n",term,term*0.254);
        break;
        default :
        printf("you entered wrong\n");
    }

    printf("press 0 to exit \n");
    scanf("%d",&i);
    }
    return 0;
}
