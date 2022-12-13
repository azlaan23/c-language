#include <stdio.h>
#include <stdlib.h>
 int main() 
{
    printf("FILE name is %s\n", __FILE__);
    printf("today 's Date is %s\n", __DATE__);
    printf("line no %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__);

     return 0;
}