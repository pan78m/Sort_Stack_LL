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
    // printf("\nenter the search element:\n");
    int value;
    scanf("%d %d", &i, &j);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            value = a[i][j];
        }
        printf("\n");
    }
    printf("value is index[%d][%d]=%4d\n", i, j, value);
}
int main()
{
    int r = 3, c = 3, i, j;
    int a[3][3];
    printf("\n enter the array:\n");
    inputM(a, r, c);
    printf("\nprint the array:\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    printf("\nPrint the index search value\n");
    printM(a, r, c);

    return 0;
}