#include <iostream>
#include <iomanip>

int main()
{
    double a, b, c;
    double l, r, dx;

    std::cin >> a >> b >> c;
    std::cin >> l >> r >> dx;

    bool is_integer = not ((int(a) | int(b)) and (int(a) or int(c)));

    for (double x = l; x <= r; x += dx)
    {
        double f;
        if (x < 0 and b != 0)
        {
            f = a * x*x + b;
        }
        else if (x > 0 and b == 0)
        {
            f = (x - a) / (x - c);
        }
        else 
        {
            f = x / c;
        }
        if (is_integer) std::cout << std::setw(10) << "f(" << x << ") = " << int(f) << std::endl;
        else std::cout << std::setw(10) << std::setprecision(3) << "f(" << x << ") = " << f << std::endl;
    }


    return 0;
}