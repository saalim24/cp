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
    gett(n, k);
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (abs(i - v[i]) % k == 0)
            continue;
        else
        {
            count++;
        }
    }
    if (count == 2)
        cout << 1;
    else if (count == 0)
        cout << 0;
    else
        cout << -1;
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