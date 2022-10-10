#include <iostream>
#include <cmath>

int main()
{
    int n, k, i = 0, x = 1;
    std::cin >> n >> k;

    while (x <= n)
    {
        ++i;
        x = pow(k, i);
    }
    std::cout << i - 1 << std::endl;

    return 0;
}