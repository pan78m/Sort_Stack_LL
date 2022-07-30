#include <stdio.h>

void printArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
}

void merge(int a[], int low, int mid, int high)
{
    int i, j, k, b[100];
    i =low;
    j = mid+1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    while (i <= mid)
    {
        b[k] = a[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        b[k] = a[j];
        j++;
        k++;
    }
    for (i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}
void mergeSort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}
int main()
{
   int n;
   printf("how many terms:\n");
   scanf("%d",&n);
   int a[n];
   for (int i = 0; i <n; i++)
   {
     printf("element-%d:",i+1);
     scanf("%d",&a[i]);
   }
   
    mergeSort(a, 0, n - 1);
    printf("after the array sorted\n");
    printArr(a, n);
    return 0;
}