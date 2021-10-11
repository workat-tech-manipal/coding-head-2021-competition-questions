#include <stdio.h>
#include <random>
#include <iostream>


using namespace std;


int main()
{
    int i = 0;
    srand(time(0));
    while (i++ < 8)
    {
        long long int r = (rand() % 10000) + 1;
        cout << r << "\n";
    }
    return 0;
}