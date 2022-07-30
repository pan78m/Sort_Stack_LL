#include <iostream>
using namespace std;

// /**
//  * @brief description
//  * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
//  * @date 2022-07-18 (20:20)
//  *
//  * @returns int
//  */
void InputArr(int a[], int n)
{
    cout << "\n enter 6 element:\n";
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "-element:";
        cin >> a[i];
    }
}
void LinearS(int a[], int n)
{
    int value, i, flag = 0;
    cout << "\n enter which value search you?\n";
    cin >> value;
    for (i = 0; i < n; i++)
    {
        if (a[i] == value)
        {
            cout << "position " << i + 1 << endl;
            flag = 1;
               break;
        }
    }

    if (i == n)
    {
        cout << "not found";
        
    }
}

void Printrr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int n = 6, value, i, flag = 0;
    int a[n];
    InputArr(a, n);
    cout << "\n Given array\n";
    Printrr(a, n);
    cout << "\n";
    // cout << "\n enter which value search you?\n";
    // cin >> value;
    // for (i = 0; i < n; i++)
    // {
    //     if (a[i] == value)
    //     {
    //         cout << "position " << i + 1<<endl;
    //         flag = 1;
    //         break;
    //     } 
    // }

    // if (i == n)
    // {
    //     cout << "not found"<<endl;
    // }

     LinearS(a, n);
    return 0;
}