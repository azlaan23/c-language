#include <stdio.h>
int main()
{

    int a = 76;
    int *ptr = &a;
    int *ptr2= NULL;
    printf(" the address of pointer is of a %p\n", &ptr);
    printf("the address of a is %p\n", &a); //   know to store the addrss
    printf("the address of a is %p\n", ptr);
    printf("the value of a is %d\n", *ptr);
    printf("the value of a is %d\n", a);
    printf("the value of some garbage is %p\n", ptr2);
    return 0;
}