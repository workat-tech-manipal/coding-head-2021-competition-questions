#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;
        unordered_map<char, int> m;
        int max_result = -1, left = 0, right = 0;
        while (right < n)
        {
            if (s[right] == 'y' && m['y'] < k)
                m[s[right++]]++;
            else if (s[right] == 'x')
                right++;
            else
                m[s[left++]]--;
            max_result = max(max_result, right - left);
        }
        right = 0;
        left = 0;
        m.clear();
        while (right < n)
        {
            if (s[right] == 'x' && m['x'] < k)
                m[s[right++]]++;
            else if (s[right] == 'y')
                right++;
            else
                m[s[left++]]--;
            max_result = max(max_result, right - left);
        }
        cout << max_result << '\n';
    }

    return 0;
}