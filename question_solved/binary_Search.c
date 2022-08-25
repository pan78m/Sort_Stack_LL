#include <stdio.h>
#include <stdlib.h>
void printA(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void BinaryS(int *a, int n)
{
    int flag = 0, mid, low, high;
    low = 0;
    high = n - 1;
    int value;
    printf("\nwhich value search:\n");
    scanf("%d", &value);
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == value)
        {
            flag = 1;
            break;
        }
        else if (a[mid] > value)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (flag == 0)
    {
        printf("\nThe value not found.\n");
    }
    else
    {
        printf("print the position-%d of element:", mid + 1);
    }
}
int main()
{
    // Let's start here
    int n;
    printf("\nHow value are store:\n");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter the data of array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("element-%d:", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\n");
    printA(a, n);
    printf("\nBinary Search:\n");

    BinaryS(a, n);
    return 0;
}