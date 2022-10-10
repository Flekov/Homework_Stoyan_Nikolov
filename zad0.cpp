#include <iostream>

int main()
{
    int n, counter, max = 0;
    std::cin >> n;

    for (int i = n; i > 0; i /= 2)
    {
        if (i % 2 == 1)
        {
            ++counter;
            if (max < counter)
                max = counter;
        }
        else
            counter = 0;
    }

    std::cout << max - 1 << std::endl;
}