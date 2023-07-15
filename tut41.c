#include <stdio.h>
#include <string.h>

void parser(char string[])
{
    int a;
    a=strlen(string);
    for(int i=5;i<23;i++)
    {
    printf("%c",string[i]);
}
}
int main()
{
    char string[]= "<h1> this is a heading </h1>";
    parser(string);
    return 0;
}