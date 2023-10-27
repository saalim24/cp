#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool x = false;

    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;

        if (v == 0)
        {
            cout << 0 << endl;
        }
        else if (v % 2 == 0)
        {
            cout << v / 2 << endl;
        }
        else if (x)
        {
            cout << static_cast<int>(floor(static_cast<double>(v) / 2)) << endl;
            x = !x;
        }
        else
        {
            cout << static_cast<int>(ceil(static_cast<double>(v) / 2)) << endl;
            x = !x;
        }
    }

    return 0;
}
