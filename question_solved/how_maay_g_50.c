#include <stdio.h>
#include <stdlib.h>
int n = 8;
void inputA(int a[], int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {

        printf("element-%d:", i);
        scanf("%d", &a[i]);
    }
}
void printA(int a[], int n)
{
    int i, count = 0;
    for (i = 1; i <= n; i++)
    {

        if (a[i] > 50)
        {
            printf("%d ", a[i]);
            count++;
        }
    }
    printf("\ntotal number greater than 50 is %d\n", count);
}
int main()
{
    int n;
    int a[8];
    printf("\n enter the array:\n");
    inputA(a, 8);
    printf("\nprint the array:\n");
    printA(a, 8);

    return 0;
}