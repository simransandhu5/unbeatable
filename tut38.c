#include <stdio.h>


typedef struct student
{
    int marks ;
    char fav_char ;

}simran;
int main()
{
  simran s1,s2;
    s1.marks=23;
    s1.fav_char='d';
    s2.marks=34;
    s2.fav_char='e'; 
      printf("ravi got %d marks and kavi got %d marks\n ",s1.marks,s2.marks);
    printf("name of s1 is %c\n", s1.fav_char);
    printf("e got %d \n",s2.marks);
    printf("favchar is %c\n",s2.fav_char);
    return 0;
}