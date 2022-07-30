#include <iostream>
using namespace std;
int main()
{
    int x, a, b, c;
    cout << "\nHow many key on hand?\n";
    cin >> x;
    cout << "\n enter the value :a,b,c\n";
    cin >> a >> b >> c;
    if (x <= 3 && x != 0)
    // while (x <= 3)
    {
        if (a <= 3 && b <= 2 && c <= 3)
        {
            cout << "\nYES\n";
            // break;
        }
        else
        {
            cout << "\nNO\n";
            // break;
        }
    }

    return 0;
}