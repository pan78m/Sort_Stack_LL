#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}
void PrintArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int i, j, temp, n;
    cout << "\n enter the terms:\n";
    cin >> n;
    int a[n];
    // input the index of array.
    for (i = 0; i < n; i++)
    {
        cout << i + 1 << "-element:";
        cin >> a[i];
    }
    // check condition for bubble sort.
    for (i = 0; i < n - 1; i++) // pass count?
    {
        for (j = 0; j < n - i - 1; j++) // compare then swap?
        {
            if (a[j] > a[j + 1]) // 7 4 10 8
            {
                swap(&a[j+1], &a[j]);
            }
            PrintArr(a, n);
            cout << "\n";
        }
    }

    // PrintArr(a, n);

    return 0;
}