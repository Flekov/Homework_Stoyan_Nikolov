#include <iostream>

int main()
{
    int a, b, digit1, digit2, counter = 0;
    std::cin >> a >> b;

    for (int i = a; i > 0; i /= 10)
    {
        digit1 = a % 10;
        digit2 = b % 10;
        if (digit1 == digit2)
            ++counter;
        a /= 10;
        b /= 10;
    }
    std::cout << counter << std::endl;

    return 0;
}