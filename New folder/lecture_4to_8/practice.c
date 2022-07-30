#include <stdio.h>
// SELECTION_Sort?
// Insertion_Sort??
// quick_sort??
int partition(int a[], int low, int high)
{
    int i, j, pivot, temp;
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

void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = partition(a, low, high);
        quickSort(a, low, mid - 1);  // left subarray
        quickSort(a, mid + 1, high); // right subarray..
    }
}
int main()
{

    int n, low, high;
    printf("\n how many terms:\n");
    scanf("%d", &n);
    int a[n] ;
     
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    quickSort(a, 0, n - 1);
    printf("\nsorte array here!!\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    /*int n, i, j, temp, flag = 0, max;
    printf("\n enter the terms:\n");
    scanf("%d", &n);
    int a[n];
    printf("\n store date in index:\n");
    for (i = 0; i < n; i++)
    {
        printf("element-%d:", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 1; i <n; i++)
    {
        max = a[i];
        j = i - 1;
        while (j >= 0 && max <a[j])
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1]=max;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }


    for (i = 0; i < n; i++)
    {
        max = i;

        for (j = i + 1; j < n; j++)
        {
            if (a[j] > a[max])
            {
                max = j;
            }
        }

        if (max != i)
        {
            temp = a[max];
            a[max] = a[i];
            a[i] = temp;
            flag = 1;
        }
    }

    if (flag == 0)
    {
        printf("\n sorted value!!");
    }
    /*
    Out put show decending order means 10 8 7 5 4 3.
    for (i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }

    for (i = n - 1; i >= 0; i--)
    {
        printf("%d  ", a[i]);// Output show acending order is:3 4 5 7 8 10..
    }
    */

    return 0;
}