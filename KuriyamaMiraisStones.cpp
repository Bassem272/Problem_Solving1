#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> a1(n), a2(n);
    std::vector<long long> unsorted(n + 1, 0), sorted(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        std::cin >> a1[i];
        a2[i] = a1[i];
    }

    std::sort(a2.begin(), a2.end());

    for (int i = 1; i <= n; i++)
    {
        unsorted[i] = a1[i - 1] + unsorted[i - 1];
        sorted[i] = a2[i - 1] + sorted[i - 1];
    }

    int n2;
    std::cin >> n2;
    while (n2--)
    {
        int t, l1, l2;
        std::cin >> t >> l1 >> l2;
        if (t == 1)
        {
            std::cout << unsorted[l2] - unsorted[l1 - 1] << std::endl;
        }
        else
        {
            std::cout << sorted[l2] - sorted[l1 - 1] << std::endl;
        }
    }

    return 0;
}
