#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

int main()
{
    srand(time(0));
    int tests = rand() % 100 + 1;
    cout << tests << '\n';
    while (tests--)
    {
        int n = rand() % 100 + 4;

        int consequence = rand() % 3;
        int amount = rand() % 1000 + 100;
        cout << n << '\n';
        cout << consequence << '\n';
        if (consequence == 0)
        {

            for (int i = 0; i < n; i++)
                cout << amount << ' ';
        }
        else if (consequence == 1)
        {
            int first_index = rand() % n;
            int first_number = rand() % amount;
            int second_index = rand() % n;
            int second_number = amount - first_number;
            for (int i = 0; i < n; i++)
            {
                if (i == first_index)
                    cout << first_number << ' ';
                else if (i == second_index)
                    cout << second_number << ' ';
                else
                    cout << amount << ' ';
            }
        }
        else
        {
            int wrong_numbers = rand() % n + 3, counter = 0;
            vector<int> arr(n, amount);
            for (int i = 0; i < n; i++)
            {
                bool whether_to_print_right = rand() & 1;

                if (counter >= wrong_numbers || whether_to_print_right)
                    continue;
                int random_num = rand() % amount;
                int random_num_2 = amount - random_num;
                arr[i] = random_num;
                arr[n - i - 1] = random_num_2;
            }
            for (int i = 0; i < n; i++)
                cout << arr[i] << ' ';
            cout << '\n';
        }
        cout << '\n';
    }

    return 0;
}