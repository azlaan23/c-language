#include <stdio.h>
#include <stdlib.h>
 int main() 
{

// //use of molloc
// int *ptr;
// int n;
// printf("Enter the size of the array you want to create \n");
// scanf("%d", &n);

// ptr = (int *)malloc(n * sizeof(int));
// for (int i = 0; i < 3; i++)
// {
// printf("Enter the value no %d of the this array\n", i );
// scanf("%d", &ptr[i]);
// }
// for (int i = 0; i < n; i++)
// {
//     printf("the value at %d\n of this array is %d\n", i, ptr[i]);
// }



// //use of calloc
// int *ptr;
// int n;
// printf("Enter the size of the array you want to create \n");
// scanf("%d", &n);

// ptr = (int *)calloc(n , sizeof(int));
// for (int i = 0; i < 3; i++)
// {
// printf("Enter the value no %d of the this array\n", i );
// scanf("%d", &ptr[i]);
// }
// for (int i = 0; i < n; i++)
// {
//     printf("the value at %d\n of this array is %d\n", i, ptr[i]);
// }




//use of realloc
int *ptr;
int n;
printf("Enter the size of the new array you want to create \n");
scanf("%d", &n);

ptr = (int *)realloc(ptr  ,n* sizeof(int));
 for (int i = 0; i < 3; i++)
 {
 printf("Enter the value no %d of the this array\n", i );
scanf("%d", &ptr[i]);
 }
for (int i = 0; i < n; i++)
{
    printf("the value at %d\n of this array is %d\n", i, ptr[i]);
}


     return 0;
}