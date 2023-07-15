#include <stdio.h>
#include <string.h>
union student 
{
    int id ;
    int marks;
    char fav_char;
    char name[20];
};
int main()
{
    union student s1;
    s1.id =23;
    s1.marks=45;
    strcpy(s1.name, "simran");
    s1.fav_char='d';

    printf("id of s1 is %d\n",s1.id);
    printf("marks is s1:%d\n",s1.marks);
    printf("favchar is %c \n ",s1.fav_char);
    printf("name is %s\n",s1.name);
    return 0;
}