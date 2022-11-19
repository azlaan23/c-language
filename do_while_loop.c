#include <stdio.h>
// do while loop
int main()
{

    int num, index = 0;
    printf("Enter a number \n");
    scanf("%d", &num);

    do
    {
        printf(" %d\n", index);
        index = index + 1;

    } while (index < num);
    return 0;
}




int main(){
    int num , index = 0 ;
    printf (" enter the number \n");
    scanf (" %d", num);\

    do {
        printf("%d\n", index);
        index= index +1
    }