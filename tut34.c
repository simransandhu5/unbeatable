#include <stdio.h>

void printstr(char str[])
{
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
}
int main()
{
   // char str[]={'h','a','r','r','y','\0'};
   //char str[]="harry";
    char str[34];
    gets(str);
    printf("ucing function \n");
    printstr(str);
    printf("\n");
    printf("using printf %s \n",str);
    printf("using puts:\n");
    puts(str);
    return 0;
}