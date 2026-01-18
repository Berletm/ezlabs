#include <iostream>
#include <cmath>
#include <string>

bool is_prime(int num)
{
    if (num < 2) return false;

    for (int i = 2; i < (std::sqrt(num) + 1); ++i) if (num % i == 0) return false;
    
    return true;
}

int main()
{
    int n;
    std::cin >> n;

    int prev_row_number = -1;
    for (int i = 0; i <= n; ++i)
    {
        int row_number = i / 10;

        if (i != 2 and i % 2 == 0) continue;
        if (!is_prime(i)) continue;

        if (prev_row_number != row_number)
        {
            if (prev_row_number != -1) std::cout << std::endl;
            std::cout << i;
        }
        else std::cout << " " << i;

        prev_row_number = row_number;
    }

    return 0;
}