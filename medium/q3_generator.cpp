#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    char arr[] = {'x', 'y'};
    int len = rand() % 20 + 2;
    cout << len << ' ';
    int k = rand() % (len/2);
    cout << k << ' ';
    for (int i = 0; i < len; i++)
    {
        int result = rand() % 10000;
        int index = result / 5000;
        cout << arr[index];
    }
    cout << '\n';

    return 0;
}