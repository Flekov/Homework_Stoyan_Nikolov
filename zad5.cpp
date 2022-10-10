#include <iostream>

int main()
{
    int n, number = 0;
    std::cin >> n;

    for (int i = 1; i < n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            ++number;
            std::cout << number << " ";
            if (number == n)
                break;
        }
        std::cout << std::endl;
        if (number == n)
            break;
    }

    return 0;
}