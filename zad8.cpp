#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int k = n - i - 1; k >= 1; k--)
        {
            std::cout << " ";
        }
        std::cout << "/";
        for (int j = 0; j < i; j++)
        {
            std::cout << "  ";
        }
        std::cout << "\\" << std::endl;
    }
    for (int i = 0; i < 2 * n; i++)
        std::cout << "-";
    std::cout << std::endl;

    for (int i = 0; i < n; i++)
    {
        std::cout << "|";
        for (int k = 0; k < 2 * n - 2; k++)
        {
            std::cout << " ";
        }
        std::cout << "|";
        std::cout << std::endl;
    }
    for (int i = 0; i < 2 * n; i++)
        std::cout << "=";
    std::cout << std::endl;
    return 0;
}