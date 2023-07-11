#include <stdio.h>
int main()
{
    char arr[] = {1,2,3,4,5,6,7};
    printf("address of fist element is %d\n",&arr[0]);
    printf("address of fistr element is %d\n", arr);
    printf("address of second element is %d\n",&arr[1]);
    printf("address of second element is %d\n",arr+1);

    printf("address value  of fist element is %d\n",*(&arr[0]));
    printf("address value  of fist element is %d\n",arr[0]);
    printf("address value of fistr element is %d\n", *(arr));
    printf("address value of second element is %d\n",*(&arr[1]));
    printf("address value of second element is %d\n",arr[1]);
    printf("address value of second element is %d\n",*(arr+1));
    return 0;
}