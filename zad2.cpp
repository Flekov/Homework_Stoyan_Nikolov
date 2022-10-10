#include <iostream>

int main()
{
    int a, b, counter = 0;
    std::cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        int sum = 0, multi = 1, k = i;
        while (k > 0)
        {
            sum += k % 10;
            multi *= k % 10;
            k = k / 10;
        }
        if (sum == multi)
            ++counter;
    }

    std::cout << counter << std::endl;

    return 0;
}