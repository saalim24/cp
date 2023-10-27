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
    string a, b;
    cin >> a >> b;
    while (a.length() != b.length())
    {
        a.insert(a.begin(), '0');
    }
    int n = b.length();
    int ans = 0;
    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        if (ok)
        {
            ans += 9;
        }
        if (a[i] != b[i] and not ok)
        {
            ans += abs(a[i] - b[i]);
            ok = true;
        }
    }
    cout << ans << line;
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