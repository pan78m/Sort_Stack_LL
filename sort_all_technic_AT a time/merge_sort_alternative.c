#include <stdio.h>
#include <stdlib.h>
void PrintA(int a[], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%d ", a[i]);
    }
}
void merge(int a[], int lb, int mid, int ub)
{
    int i, j, k, n1, n2;
    n1 = mid - lb + 1;
    n2 = ub - mid;
    int l[n1], r[n2];
    for (i = 0; i < n1; i++)
    {
        l[i] = a[lb + i];
    }
    for (j = 0; j < n2; j++)
    {
        r[j] = a[j + mid + 1];
    }
    i = 0;
    j = 0;
    k = lb;
    while (i < n1 && j < n2)
    {
        if (l[i] < r[j])
        {
            a[k] = l[i];
            i++;
        }
        else
        {
            a[k] = r[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        a[k] = l[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = r[i];
        j++;
        k++;
    }
}
void mergeS(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        int mid = (lb + ub) / 2;
        mergeS(a, lb, mid);
        mergeS(a, mid + 1, ub);
        merge(a, lb, mid, ub);
    }
}
int main()
{
    int count, i;
    printf("\n enter the terms:\n");
    scanf("%d", &count);
    int a[count];
    for (i = 0; i < count; i++)
    {
        scanf("%d", &a[i]);
    }
    mergeS(a, 0, count - 1);
    printf("\n sorted array:\n");
    PrintA(a, count);
    return 0;
}