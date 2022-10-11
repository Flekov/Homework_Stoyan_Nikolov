#include <iostream>

int main()
{
    int n;
    do
    {
        std::cin >> n;
    } while (n < 1 || n > 100);

    for (int i = 1; i <= n; i++)
    {
        for (int k = i; k > 1; k--)
        {
            std::cout << " ";
        }
        for (int j = i; j <= n; j++)
        {
            std::cout << j;
        }
        std::cout << std::endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int k = i; k > 1; k--)
        {
            std::cout << " ";
        }
        for (int j = i; j <= n; j++)
        {
            std::cout << j;
        }
        std::cout << std::endl;
    }

    return 0;
}