#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int k = 1, loc = 0, born, n;
    cout << "\n enter the terms:\n";
    cin >> n;
    int year[n];
    for (k = 1; k <= n; k++)
    {
        cout << k << "-elemet:";
        cin >> year[k];
    }
    cout << "input born year for employment:\n";
    cin >> born;
    for (k = 1; k <= n; k++)
    {
        if (born == year[k])
        {
            loc = k;
        }
    }

    if (loc == 0)
    {
        cout << "not found any employment born.\n";
    }
    else
    {
        cout << "year is " << loc;
    }

    return 0;
}