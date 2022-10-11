#include <iostream>

int main()
{
    int a, b, sumEven, sumOdd, multiEven, multiOdd;
    do
    {
        std::cin >> a >> b;
    } while (a >= b);

    for (int i = a; i < b; i++)
    {
        sumEven = 0;
        sumOdd = 0;
        multiEven = 1;
        multiOdd = 1;

        for (int k = i; k > 0; k /= 100)
        {
            sumEven += k % 10;
            multiEven *= k % 10;
        }
        for (int k = i / 10; k > 0; k /= 100)
        {
            sumOdd += k % 10;
            multiOdd *= k % 10;
        }

        if (sumEven == sumOdd && multiEven == multiOdd)
            std::cout << i << std::endl;
    }
}