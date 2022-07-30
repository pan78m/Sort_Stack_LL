#include <stdio.h>
#include <stdlib.h>
int Partition(int a[], int low, int high)
{
    int i, j, pivot, temp;
    if (low < high)
    {
        i = low + 1;
        j = high;
        pivot = a[low];
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        temp = a[low];
        a[low] = a[j];
        a[j] = temp;
        return j;
    }
}
void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int i = Partition(a, low, high);
        quickSort(a, low, i - 1);
        quickSort(a, i + 1, high);
    }
}

void PrintArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
}
int main()
{
    int n, i, j, low, high;
    printf("\n enter how many terms:\n");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("element-%d:", i + 1);
        scanf("%d", &a[i]);
    }
    quickSort(a, 0, n - 1);
    printf("\n sorted array is:");
    PrintArray(a, n);
    return 0;
}