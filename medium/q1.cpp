#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c;

        cin >> a;

        //if a is odd
        if (a % 2 != 0)
        {
            b = ((a * a) + 1) / 2;
            c = b - 1;
            if (b > 0 && c > 0)
            {
                cout << b << " " << c;
            }
            else
                cout << "-1";
        }

        else if (a > 2 && a % 2 == 0)
        {
            b = a * a;
            b = b / 4;
            c = b + 1;
            b = b - 1;
            cout << b << " " << c;
        }

        else if (a == 2)
            cout << "-1";
    }

    return 0;
}