#include <stdio.h>
int func1( int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("The value at %d is %d\n ", i, arr[i]);
    }
    // arr[0]= 546;   very important point thast if you change ang vale her,it get reflect
// in  main()
}




 int main() 
{
int arr[]= { 3,34,421,3,23};
printf("the value at index o is %d\n ",arr[0]);
func1(arr);
printf("the value at index 0 is %d\n", arr[0]);
     return 0;
}