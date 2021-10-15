#include <iostream>
#include <vector>

int main()
{
    std::vector<unsigned long long> partitions;
    partitions.push_back(1);
    const long long modulo = 1000000007; // 10^9 + 7

    unsigned int tests = 1;
    std::cin >> tests;
    while (tests--)

    {
        unsigned int limit = 100000; // the solution is < 100000, program ab

        std::cin >> limit;

        for (unsigned int n = partitions.size(); n <= limit; n++)
        {

            long long sum = 0;

            for (unsigned int i = 0;; i++) // abort inside loop
            {

                int alternate = 1 + (i / 2);
                if (i % 2 == 1)
                    alternate = -alternate;
                unsigned int offset = alternate * (3 * alternate - 1) / 2;
                if (n < offset)
                    break;
                if (i % 4 < 2)
                    sum += partitions[n - offset];
                else
                    sum -= partitions[n - offset];
                sum %= modulo;
            }
            if (sum < 0)
                sum += modulo;

            partitions.push_back(sum);
        }

        std::cout << partitions[limit] << std::endl;
    }

    return 0;
}