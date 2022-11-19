#include <stdio.h>
 int sum(int a, int b)   //section a
{
    return a + b;
}
void printstar(int n)  //section b

{
    for (int i = 0; i < n; i++)
    {
        printf(" %c", '*');
    }
}
int takenumber()    //section c 
{      
    int i;
    printf("Enter a number");
    scanf("%d", &i);
    return i;
}

int main()
{
    int a, b, c;   //section a 
    a = 9;
    b = 87;
    c = sum(a, b);
    c = takenumber();   //section c 
    // printstar(1227);    //section c
    printf("the number entered is %d\n", c);    //section c 
    // printf("the sum is %d\n", c);        //section a 
}
// we can also like this // int sum ( int a, int b ){
// return a + b ;     //section a
// }