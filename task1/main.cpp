#include <iostream>

struct vec2d
{
    double x, y;
};

int main ()
{
    vec2d a = {1, 1}, b = {5, 0}, c = {5, 5};

    vec2d point;

    std::cin >> point.x >> point.y;

    while (not (point.x == 0 and point.y == 0))
    {
        if (a.x <= point.x and point.x <= b.x and a.y <= point.y <= c.y) std::cout << "True" << std::endl;
        else std::cout << "False" << std::endl;
        std::cin >> point.x >> point.y;
    }

    return 0;
}