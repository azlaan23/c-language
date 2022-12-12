#include <stdio.h>
#include <string.h>
int main()
{
    int a = 567;
    float b = 3.43;
    void *ptr;
    ptr = &a;
    printf("The value  of a is %d\n", *((int *)ptr));
    printf("The value  of a is %f\n", *((float *)ptr));
    return 0;
}