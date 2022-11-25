#include <stdio.h>
int main()
{
    int arr[] = {1, 2,87,37,78,908, 34,};
    printf("value at problem 1 of the array is %d\n", arr[04]);
    printf("the address of first element of the array is %d\n", &arr[0]);
    printf("the address of first element of the array is %d\n", arr);
    printf("the address of second element of the array is %d\n", &arr[1]);
    printf("the address of second element of the array is %d\n", arr + 1);




    printf("the value address of first element of the array is %d\n", *(&arr[0]));
     printf("the value address of first element of the array is %d\n", arr[4]);
    printf("the value address of first element of the array is %d\n", *(arr));
    printf("the value address of second element of the array is %d\n", *(&arr[1]));
    printf("the value address of second element of the array is %d\n", *(arr + 1));

    return 0;
}