#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    srand(time(0));
    int rows = rand() % 10 + 3;
    int cols = rand() % 10 + 3;
    cout << rows << ' ' << cols << '\n';
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            char random = ((rand() & 1) ? '1' : '0');
            cout << random << ' ';
        }
        cout << '\n';
    }

    return 0;
}