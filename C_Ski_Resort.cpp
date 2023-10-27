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
    gettt(n, d, t);
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    ll ans = 0, count = 0;
    for (auto i : v)
    {
        count = i <= t ? count + 1 : 0;
        ans += max(0ll, count - d + 1);
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