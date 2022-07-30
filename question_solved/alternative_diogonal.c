#include <stdio.h>
#include <stdlib.h>
void inputM(int a[][3], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("element-%d,%d:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void printM(int a[][3], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            for (j = c - 1; j >= 0; j--)
            {
                if (j ==0||j==c-1||i==r-1||i==1)

                {
                    printf("%d ", a[i][j]);
                    break;
                }
                else
                {
                    printf(" 0 ");
                    break;
                }
            }

            // if (i==j)

            // {
            //     printf("%d ", a[i][j]);

            // }
            // else
            // {
            //     printf(" 0 ");
            // }
        }
        printf("\n");
    }
}
int main()
{
    int r = 3, c = 3, i, j;
    int a[3][3];
    printf("\n enter the array:\n");
    inputM(a, r, c);
    printf("\nprint the array:\n");
    printM(a, r, c);

    return 0;
}