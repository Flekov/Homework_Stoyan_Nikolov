#include <iostream>
#include <cmath>

int main()
{
    double x, y, distance, triangleSurface, X = -1, Y = 1, r = 1, surface1, surface2, surface3;
    std::cin >> x >> y;

    distance = (x - X) * (x - X) + (y - Y) * (y - Y);
    triangleSurface = abs(-3 * (0 - 1) + (-1) * (1 - 0) + 0 * (0 - 0)) / 2;
    surface1 = abs(x * (0 - 1) + (-1) * (1 - y) + 0 * (y - 0)) / 2;
    surface2 = abs(-3 * (y - 1) + x * (1 - 0) + 0 * (0 - y)) / 2;
    surface3 = abs(-3 * (0 - y) + (-1) * (y - 0) + x * (0 - 0)) / 2;
    if (distance <= r * r && surface1 + surface2 + surface3 == triangleSurface)
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;

    return 0;

    //без контур???
}