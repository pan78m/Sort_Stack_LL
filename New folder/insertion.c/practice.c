#include <stdio.h>
#include <stdlib.h>
/**
 * @brief description
 * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
 * @date 2022-08-28 (13:35)
 *
 * @returns int
 */

int n, i, j;

void inputA(int *a, int n)
{
    printf("\nEnter the value of index:\n");
    for (i = 0; i < n; i++)
    {
        printf("element-%d:", i + 1);
        scanf("%d", &a[i]);
    }
}

void printA(int *a, int n)
{

    printf("\nShow the value of index:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
int main()
{
    printf("\nEnter the size:\n");
    scanf("%d", &n);
    int arr[n];
    // printf("\nEnter the value of index:\n");
    // for (i = 0; i < n; i++)
    // {
    //     printf("element-%d:", i + 1);
    //     scanf("%d", &arr[i]);
    // }
    inputA(arr, n);
    printf("\n");
    printA(arr, n);
    printf("\n");

    int pos, value;
    printf("\nWhich position value add:\n");
    scanf("%d", &pos);
    printf("\nWhich value add:\n");
    scanf("%d", &value);
    for (i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = value;
    n++;
    printf("\n");
    printA(arr, n);
    printf("\n");
    // printf("\nShow the value of index:\n");
    // for (i = 0; i < n; i++)
    // {
    //     printf("%d\t", arr[i]);
    // }
    return 0;
}