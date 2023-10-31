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
    get(n);
    string s;
    cin >> s;
    int mx = 1;
    int count = 1;

    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
        }
        else
            count = 1;
        mx = max(mx, count + 1);
    }
    cout << max(2, mx) << line;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
}