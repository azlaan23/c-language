#include <stdio.h>
#include "Dangling_pointer.c"
# define PI 3.14
# define SQUARE (r) r*r 

 int main2() 
{ int var = 0;
float var = PI;
int * ptr = functionDangling();
printf("The value of value of PI %f\n", var);
// int  ptr = functionDangling();
//printf("the area of this circle is %f\n", PI, * SQUARE(r));

printf("this is m e %d\n", var);

     return 0;
}