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
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void PrintArr(int a[], int n)
{
    int i;

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
}
int partition(int a[], int low, int high)
{
    int i, j, pivot;
    int n = 6;
    while (low < high)
    {
        i = low + 1;
        j = high;
        pivot = low;
        while (a[i] <= a[pivot] && (pivot != i))
        {
            i++;
        }
        while (a[j] >= a[pivot] && (pivot != j))
        {
            j--;
        }
        if (i < j)
        {
            swap(&a[i], &a[j]);
            // cout<<"sorted "<<i-1<<" pass =";
            PrintArr(a, 6);
            cout << "\n";
            break;
        }
/*
         50  40  10  27  9  21  (here pivot is 50)
         21  40  10  27  9  50 (here now pivot is 21 that is new pivot element)
         21  9  10  27  40  50
         10  9  21  27  40  50 (new pivot is 10)
         9  10  21  27  40  50
When first time interchange pivot and j(means high value) then new initial index is new pivot set here upper example work same type..

*/
        swap(&a[pivot], &a[j]);
        // cout<<"sorted "<<pivot+4<<" pass =";
        PrintArr(a, 6);
        cout << "\n";
        break;
    }
    return j;
}
void QuickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int index = partition(a, low, high);
        QuickSort(a, low, index - 1);
        QuickSort(a, index + 1, high);
    }
}
int main()
{
    int n = 6;
    int a[n];
    inputArr(a, n);
    cout<<"\nGiven array: ";
    PrintArr(a, n);
    cout << "\n";
    QuickSort(a, 0, 5);
    cout << "\n";
    cout << "\nfinal sorted output here!!\n"
         << endl;
    PrintArr(a, n);
    return 0;
}