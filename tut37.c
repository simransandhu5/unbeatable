#include <stdio.h>

 typedef struct student
{
    int id;
    int marks;
    char fav_char;
} simran ;
  simran harry,ravi,shubham;

  void print()
  {
    printf("%d",harry.id);
  }

int main()
{
  
    harry.id =33;
    harry.marks=45;
    harry.fav_char ='p';
    ravi.id=34;
    ravi.marks=55;
    ravi.fav_char ='r';
    printf("harry got %d marks\n",harry.marks);
    printf("harry id is %d \n",harry.id);
    print();
    return 0;
}