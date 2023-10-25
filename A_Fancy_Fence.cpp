#include <iostream>
#include <cmath>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int a;
        std::cin >> a;

        // Calculate the number of sides 'n'
        double n = 360.0 / (180.0 - a);

        // Check if it's a valid regular polygon
        if (n >= 3 && std::abs(n - round(n)) < 1e-9)
        {
            std::cout << "YES" << std::endl;
        }
        else
        {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}
