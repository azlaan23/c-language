#include <stdio.h>
#include <stdlib.h>

 int main() 
{
int *ptr = (int *) malloc (7* sizeof(int));
ptr[0] = 34;
ptr[1] =43;
ptr[2] = 44;
ptr[3] = 44;


     return 0;
}