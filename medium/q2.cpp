#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    if (v[0].first == v[n - 1].first)
        cout << "All good";
    else if ((v[0].first + v[n - 1].first) % 2 || n > 2 && (v[1].first != v[n - 2].first || v[1].first != (v[0].first + v[n - 1].first) / 2))
        cout << "You are dead";
    else
        cout << "You shifted " << (v[n - 1].first - v[0].first) / 2 << " amount from glass #" << v[0].second + 1 << " to glass #" << v[n - 1].second + 1 << ".";
    return 0;
}