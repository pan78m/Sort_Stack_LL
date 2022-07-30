#include <stdio.h>
#include <stdlib.h>
void inputM(int a[][4], int r, int c)
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
void printM(int a[][4], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            
            if (j == 0 || j == c - 1)
            {
                printf("%d ", a[i][j]);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int r = 4, c = 4, i, j;
    int a[4][4];
    printf("\n enter the array:\n");
    inputM(a, r, c);
    printf("\nprint the array:\n");
    printM(a, r, c);

    return 0;
}