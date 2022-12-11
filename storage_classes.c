#include <stdio.h>

// #include "storage_classess2.c"

//  int sum;
int myfunc(int a, int b)
{

    // auto int sum;
static int myVar;
myVar ++;
    // myVar = a+b;
    // sum = a + b;
    printf("the vmVar id %d\n", myVar);
    return myVar;
    // return sum;
    
}
int sum = 98;
int main()
{

    // declaration -- telling the compiler about the variable (no space reserved )
    // Definition */-- Decleration + space reservation
    int myVar = myfunc(3,5);
  myVar = myfunc(3,5);
    myVar = myfunc(3,5);
     myVar = myfunc(3,5);
//  printf("the vmVar id %d\n", myVar);
    


    // int sum = myfunc(3, 5);

//    int myVar = myfunc(3,5);

    return 0;
}