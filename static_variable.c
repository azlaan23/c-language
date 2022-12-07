#include <stdio.h>

// int func1()
// {
//     return 34;
// }
//  int main()
// {
// printf("Ther value of func1 is %d", func1());

//      return 0;
// }

int b = 27; // this is a global variable  since it is declared inside main ()
int func1(int b1)
{
    //static int myvar;
    static int myvar = 98;
    printf("the value of myvar is %d\n", myvar);
    myvar++;

    int loc = 789; // local varibal
    // printf("the value off b inside func1 is %d", b);
    // printf("the address of b inside func1 is %d\n", &b);
    return b1 + myvar;

    // return b1 * 10;
}

int main()
{
    int b = 344;
    // printf("the address of b inside main is %d\n",&b );
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    // printf("the value of func1 is &d", val);
    // printf("%d", loc);
    return 0;
}
