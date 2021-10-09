#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

bool solve(string &a, string &b, string &c)
{
    int mapping[30] = {0};
    for (auto i : c)
        mapping[i - 'a']++;
    int index_a = 0, index_b = 0;
    while (index_a < a.size())
    {
        if (index_b == b.size())
            return false;
        if (b[index_b] == a[index_a])
        {
            index_b++;
            index_a++;
            continue;
        }
        mapping[b[index_b++] - 'a']--;
    }
    while (index_b < b.size())
        mapping[b[index_b++] - 'a']--;
    for (int i = 0; i < 30; i++)
    {
        if (mapping[i] < 0)
            return false;
    }

    return true;
}

int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        string a, b, c;
        cin >> a >> b >> c;
        cout << (solve(a, b, c) ? "Aryamann" : "Arushi") << '\n';
    }

    return 0;
}