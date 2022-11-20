#include <stdio.h>
int main()
{
    int marks[2][4] = {{23, 43, 34, 34},
                      {5, 5, 4, 2}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            // printf("  The value of %d, %d element of the array is %d\n", i, j ,marks[i] [j]);

          printf("%d  ", marks [i][j]);

        }
        printf("\n");
    }

    return 0;
}