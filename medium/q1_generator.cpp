#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    srand(time(0));
    int tests = rand() % 100 + 1;
    cout << tests << '\n';
    while (tests--)
    {
        int num = rand() % 1000000 + 1;
        cout << num << '\n';
    }

    return 0;
}