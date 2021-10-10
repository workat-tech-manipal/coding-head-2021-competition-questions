#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    srand(time(0));
    int num = rand() % 100000;
    cout << num << '\n';

    return 0;
}