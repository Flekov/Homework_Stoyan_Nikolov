#include <iostream>

int main()
{
    int n;
    do
    {
        std::cout << "Въведи нечетно число: ";
        std::cin >> n;
    } while (n % 2 == 0);

    for (int i = 1; i <= n; i++)
    {
        for (int k = n - i; k > 0; k--)
        {
            std::cout << " ";
        }
        for (int p = 1; p <= i; p++)
        {
            std::cout << "# ";
        }
        std::cout << std::endl;
    }

    return 0;
}