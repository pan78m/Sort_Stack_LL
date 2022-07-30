#include <stdio.h>
#include <stdlib.h>

void Fmatrix(int a[][10], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("element-%d,%d:", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
}
void multi(int a[][10], int b[][10], int mul[][10], int r1, int c1, int r2, int c2)
{
    int i, j, k;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k <c1; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
void show(int mul[][10], int a, int b)
{
    int i, j;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%4d", mul[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[10][10], b[10][10], mul[10][10], r1, c1, r2, c2, n, i, j, k;
    printf("\nHow many element store:N<=10:\n");
    scanf("%d", &n);
    printf("\nEnter the first matrix row & cols:\n");
    scanf("%d%d", &r1, &c1);
    printf("\nEnter the second matrix row & cols:\n");
    scanf("%d%d", &r2, &c2);
    while (c1 != r2)
    {
        printf("\nc1 & r2 are not same\n");
        printf("\nAgain Enter the value of two matrix:\n");
        printf("\nEnter the first matrix row & cols:\n");
        scanf("%d%d", &r1, &c1);
        printf("\nEnter the second matrix row & cols:\n");
        scanf("%d%d", &r2, &c2);
    }
    printf("\nenter first matrix:\n");
    Fmatrix(a, r1, c1);
    printf("\nEnter the second matrix:\n");
    Fmatrix(b, r2, c2);
    printf("\nprint the multiplication:\n");
    multi(a, b, mul, r1, c1, r2, c2);
    printf("\nshow the multiplication of matrix:\n");
    show(mul, r1, c1);

    return 0;
}