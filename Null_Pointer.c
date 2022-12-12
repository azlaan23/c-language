#include <stdio.h>
#include <string.h>
 int main() 
{
int a = 34;
int *ptr = &a;
// int *ptr = NULL;
if (ptr !=NULL)
{
    printf("THe address of a %d\n ", ptr);

}
else {
    printf("the pointer is a null pointer and connot be derefenced");
}
// printf("The address of a is %d\n", ptr);
    //  printf("The address of a is %d\n", *ptr);
     return 0;
}