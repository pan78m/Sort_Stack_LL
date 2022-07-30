#include <iostream>
using namespace std;
void InputArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "-element:";
        cin >> a[i];
    }
}
void PrintArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
void BinaryS(int a[], int n)
{
    int low, high, mid, value, i;
    low = 0;
    high = n - 1;
    cout << "\n which value is search?\n";
    cin >> value;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == value)
        {
            cout << "position is: " << mid + 1;
            break;
        }
        else if (a[mid] > value)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (a[mid] != value)
    {
        cout << "value is not found!" << endl;
    }
}
int main()
{
    int n = 6;
    int a[n];
    InputArr(a, n);
    cout << endl;
    PrintArr(a, n);
    cout << endl;
    BinaryS(a, n);
    return 0;
}