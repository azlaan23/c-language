#include <stdio.h>
int main()
{
    // label:
    //     printf("we are  inside the label");
    //     goto end;
    //     printf("hello world\n");
    //     goto label;
    //     end:

    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
    }

    for (int j = 0; j < 8; j++)
    {
        printf("Enter the number . enter the exit\n ");
        scanf("%d", &num);
    if (num== 0)
    {
            goto end;
    }
    }
end:
    return 0;
}
