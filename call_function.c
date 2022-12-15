// Callback Functions Using Function Pointers In C: C Tutorial In Hindi #73
#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b);
{
    return a + b;
}
void greetHelloAndExecute(int (*fPtr)(int, int))
{
    printf("Hello World\n");
    printf("the sum of  5 and 7 id %d\n", fPtr(5, 7));
}

void greetHelloAndExecute(int (*fPtr)(int, int))
{
    printf("Hello World good morning user");
    printf("the sum of  5 and 7 id %d\n", fPtr(5, 7));
}

int main()
{
    int (*ptr)(int, int);
    ptr = sum;
    greetHelloAndExecute(ptr);

    return 0;
}