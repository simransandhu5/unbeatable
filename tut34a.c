#include<stdio.h>
#include <string.h>

int main()
{
    char s1[20];
    char s2[20];
    char s3[30]=" is a friend of ";
    printf("enter first string\n");
    gets(s1);
    printf("enter second string\n");
    gets(s2);

    strcat(s1, (strcat( s3, s2)));
    puts(s1);
    return 0;
}