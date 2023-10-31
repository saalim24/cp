#include <bits/stdc++.h>
using namespace std;

#define line '\n'
#define all(a) a.begin(), a.end()
#define get(_24) \
    int _24;     \
    cin >> _24
#define gett(_08, _09) \
    int _08, _09;      \
    cin >> _08 >> _09
#define gettt(_10, _11, _12) \
    int _10, _11, _12;       \
    cin >> _10 >> _11 >> _12
using ll = long long;
using ull = unsigned long long;
using lld = long double;

void solve()
{
    gett(n, m);
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;

    int r = 31;
    for (int i = 0; i < m; i++)
    {
        get(x);
            r = x;
            for (int j = 0; j < n; j++)
            {
                if (a[j] % static_cast<int>(pow(2, r)) == 0)
                {
                    a[j] += pow(2, (r - 1));
                }
            }
        
    }
    for (auto i : a)
        cout << i << ' ';
    cout << line;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
}