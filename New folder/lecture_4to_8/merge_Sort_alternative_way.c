#include <stdio.h>
#include <stdlib.h>
void PrintA(int a[],int n){
    for (int i = 0; i <n; i++)
    {
         printf("%d  ",a[i]);
    }
    
}
void merge(int a[], int low, int mid, int high)
{
    int i, j, k, n1, n2;
    n1 = mid - low + 1;
    n2 = high - mid;
    int l[n1], r[n2];
    for (i = 0; i < n1; i++)
    {
        l[i] = a[low + i];
    }
    for (j = 0; j < n2; j++)
    {
        r[j] = a[mid + 1 + j];
    }
    i = 0;
    j = 0;
    k = low;
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
        a[k] = r[j];
        j++;
        k++;
    }
}
void mergeSort(int a[],int low,int high){
    if (low<high)
    {
        int mid=(low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merge(a,low,mid,high);
    }
    
}
int main()
{
    int n;
    printf("how many terms:\n");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
         printf("element-%d:",i+1);
         scanf("%d",&a[i]);
    }
    mergeSort(a,0,n-1);
    printf("\nafter sorted this array.\n");
    PrintA(a,n);
    
    return 0;
}