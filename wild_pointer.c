#include <stdio.h>
#include <stdlib.h>


 int main() 
{
int a = 334;
int *ptr; // this a wild ponter 
// *ptr = 34;   // this is  not A good thing to do 
ptr = &a ; // ptr is a not longer a wild pointer 
printf("the value of a is %d\n", *ptr );
     return 0;
}