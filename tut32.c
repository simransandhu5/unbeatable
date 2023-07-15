#include <stdio.h>

int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("the value at %d is %d\n",i,array[i]);
        
    }
   // array[3]=34;// very important point if you change value actual value will change in main()
   return 0;
    
}
void func2(int* ptr)
{
for (int i = 0; i < 4; i++)
    {
        printf("the value at %d is %d\n",i,*(ptr+i));
        
    }
   // array[3]=34;// very important point if you change value actual value will change in main
    *(ptr+2)=64;
    
}
int main()
{
    int arr[]={23,13,3,4,};
   // printf("value at 3 is %d\n",arr[3]);
   // func1(arr);
 //   printf("value at 3 is %d\n",arr[3]);
    func2(arr);
    func2(arr);
  return 0;
}