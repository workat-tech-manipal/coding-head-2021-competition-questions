#include <stdio.h>
#include <random>
#include <iostream>
using namespace std;
int main()
{
    srand(time(0));
    int i = 0;

    int T = rand() % 100;
    cout << T << '\n';
    while (i++ < T)
    {
        long long int r = (rand() % 59999) + 2;
        cout << r << " ";
    }
    return 0;
}