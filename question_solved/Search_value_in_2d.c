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
    int i, j, count = 0;
    printf("\nenter the search element:\n");
    int value;
    scanf("%d", &value);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (a[i][j] == value)
            {
                printf("a[%d],[%d]\n", i, j);
                count++;
            }
        }
        printf("\n");
    }
    if (count == 0)
    {
        printf("\nValue is not found.\n");
    }
    else
    {
        printf("total times=%d\n", count);
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