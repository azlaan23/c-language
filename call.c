#include <stdio.h>
void changeValue(int *a)
{
    a = 223;
}

int main()
{
    int a = 34, b = 45;
    printf("the value of a now is %d\n", a);
    changeValue(&a);
    printf("the value pf a now is %d\n", a);
    return 0;
}

// Quick quiz
// given two no. a and b, add them substract them and assigtn them to a and b using call by reference.
//  a = 23;
//  b = 334;
//  after running ther function , then value of a and b should be given
// a = 7;
// b= 1