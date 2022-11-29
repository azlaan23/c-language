#include <stdio.h>


void func2 ( int* ptr)
{
    for (int i = 0; i < 4; i++)
    {
        // printf("the vlaue at %d is %d\n ", i, ptr[i]); both are same
        printf("the vlaue at %d is %d\n ", i, *(ptr+i));
    }
    *(ptr + 2) = 6876;
}

void func3 (int arr [2][2])
{
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 2; j++)
    {
        printf("the vlaue at %d, %d is %d\n ", i,j, arr[i][j]);
    }
    
}

}

 int main() 
{
int arr [][2] = {{ 32,25},{ 32,334}};

// func2(arr);
// func2(arr);
func3 (arr);
     return 0;
}