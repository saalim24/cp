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
    gettt(cost, valb, a);
    get(b);
    int totalval = b * valb + a;
    cost -= totalval;
    int ans = 0, rem = 0, bcoins = 0;
    if (cost <= 0)
    {
        cout << 0 << line;
        return;
    }
    else
    {
        if (cost >= valb)
            bcoins = cost / valb;
        rem = cost % valb;
        ans = bcoins + min(rem, (cost + rem) / valb);
    }
    cout << ans << line;
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