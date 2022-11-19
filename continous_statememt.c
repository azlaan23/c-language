#include <stdio.h>
int main()
{
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("%d Enter your age\n", i);
        scanf("%d\n", &age);
        // if (age<10)
        // {
        // brealk;
        //}
        if (age > 10)
        {
            continue;
        }

        printf("we are not any continoud statement");
        printf("we are not any continoud statement");
        printf("we are not any continoud statement");
        printf("we are not any continoud statement");
    }
    return 0;
}
