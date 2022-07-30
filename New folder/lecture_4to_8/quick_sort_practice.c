#include <stdio.h>
#include <stdlib.h>
int partition(int a[], int low, int high)
{
    int i, j, pivot, temp;
    i=low+1;
    j=high;
    pivot = low;
    
    
    while (i < j)
    {
        while (a[i] <= a[pivot]) // going start to mid position so increasing.
        {
            i++;
        }
        while (a[j] >a[pivot]) // decreasing right to left coming
        {
            j--;
        }
        // swap when stop start and end.
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    // when end <low. then swap pivot and end
    temp = a[pivot];
    a[pivot] = a[j];
    a[j] = temp;
    return j;
}
// quick sort.
void quick_Sort(int a[], int low, int high)
{
    if (low < high)
    {
        int start = partition(a, low, high);
        quick_Sort(a, low, start - 1);  // left sub array
        quick_Sort(a, start + 1, high); // right sub array
    }
}
// out put value.
void PrintArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
}
int main()
{
    int n, i;
    printf("\n enter the terms:\n");
    scanf("%d", &n);
    int a[n];
    // input index value.
    for (i = 0; i < n; i++)
    {
        printf("element-%d:", i + 1);
        scanf("%d", &a[i]);
    }
    // Calling function.
    quick_Sort(a, 0, n-1);
    printf("\n Sorted:");
    PrintArr(a, n);
    return 0;
} // 67 45 24 98 12 38