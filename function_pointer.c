#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b)
{
    return a + b;
}
void great()
{
    printf("HELLO WORLD  my user good morning %d\n");
}

int main()
{
    printf("The sum of 1 and 2 is %d\n", sum(1, 2)); // testing the funxction
    int (*fPtr)(int, int);// Declearing a fuhnction pointer
    fPtr = &sum;   // Creating a function pointer
    int d = (*fPtr)(4, 6);  // Declearing a function pointer
    printf(" the value off d is %d\n", d);
    return 0;
}