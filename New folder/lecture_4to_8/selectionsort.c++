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

void minimum(int a[], int n)
{
    int i, j, min;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n ; j++)
        {
            if (a[j] < a[min])// ascending order arrangement {small to big}
            //if(a[j]>a[min])// descending order{big to small}
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(&a[min], &a[i]);
        }
        cout << "sorted " << i+1 << " pass =";
        PrintArr(a, n);
        cout << "\n";
    }
}

int main()
{
    int n = 6;
    int a[n];
    inputArr(a, n);
    PrintArr(a,n);
    cout<<"\n";
    minimum(a, n);
    cout << "\n";
    PrintArr(a, n);
    return 0;
}