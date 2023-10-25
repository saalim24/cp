#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define all_elements(a) a.begin(), a.end()
using long_long = long long;
using unsigned_long_long = unsigned long long;
using long_double = long double;

void solve()
{
    int array_size, divisor;
    cin >> array_size >> divisor;
    vector<int> numbers(array_size);
    for (int i = 0; i < array_size; i++)
        cin >> numbers[i];
    if (divisor == 4)
    {
        int minimum_moves = divisor, answer = 2;
        for (int i = 0; i < array_size; i++)
        {
            if (numbers[i] % 4 == 0)
            {
                minimum_moves = 0;
                break;
            }
            else if (minimum_moves > divisor - numbers[i] % divisor)
                minimum_moves = divisor - numbers[i] % divisor;
        }
        for (int i = 0; i < array_size; i++)
        {
            if (numbers[i] % 2 == 0)
                answer = max(answer - 1, 0);
        }
        cout << min(answer, minimum_moves) << endl;
    }
    else
    {
        int minimum_moves = divisor;
        for (int i = 0; i < array_size; i++)
        {
            if (numbers[i] % divisor == 0)
            {
                minimum_moves = 0;
                break;
            }
            else if (minimum_moves > divisor - numbers[i] % divisor)
            {
                minimum_moves = divisor - numbers[i] % divisor;
            }
        }
        cout << minimum_moves << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
        solve();
}
