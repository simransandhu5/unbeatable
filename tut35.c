#include <stdio.h>
#include<string.h>

int main()
{
    char c1[]="harry";
    char c2[]="ravi";
    char c3[53];
   // puts(strcat(c1,c2));
    printf("the length of first is %d\n",strlen(c1));
    printf("the length of second is %d\n",strlen(c2));
    printf("the reverse is:");
    puts(strrev(c1));
    strcpy(c3,strcat(c1, c2));
    puts(c3);
    return 0;
}