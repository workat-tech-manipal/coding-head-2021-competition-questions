#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

bool canPlaceFlowers(std::vector<bool> &bed, int n)
{
    for (int i = 0; i < bed.size(); i++)
    {
        if (!bed[i] && (i == 0 || !bed[i - 1]) && (i == bed.size() - 1 || !bed[i + 1]))
        {
            bed[i] = 1;
            n--;
        }
    }
    return n <= 0;
}

int main()
{

    vector<bool> v = {1, 0, 0, 0, 0, 0, 0, 0, 1};
    cout << ((canPlaceFlowers(v, 4)) ? "YES" : "NO") << '\n';
}