#include <iostream>
using namespace std;
void inputArr(int a[], int n)
{
    cout << "\n store data in array\n"
         << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " element:";
        cin >> a[i];
    }
    cout << endl;
}
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
void PrintArr(int a[], int n)
{
    int i;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
}
void Merge(int a[], int low, int mid, int high)
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
        r[j] = a[j + mid + 1];
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
        PrintArr(a, 6);
        cout << "\n";
    }
    while (j < n2)
    {
        a[k] = r[j];
        j++;
        k++;
        PrintArr(a, 6);
        cout << "\n";
    }
}

void MergeSort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        MergeSort(a, low, mid);
        MergeSort(a, mid + 1, high);
        Merge(a, low, mid, high);
    }
}
int main()
{
    int n = 6;
    int a[n];
    inputArr(a, n);
    cout << "\n Given array here:" << endl;
    PrintArr(a, n);
    cout << "\n";
    MergeSort(a, 0, 5);
    cout << "\n";
    cout << "\nfinal sorted output here!!\n"
         << endl;
    PrintArr(a, n);
    return 0;
}