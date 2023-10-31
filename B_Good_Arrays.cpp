#include <bits/stdc++.h>
using namespace std;

#define int long long
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
    bool flag = false;
    if (n == 1)
    {
        flag = true;
    }
    int one = 0, other = 0;
    for (int i = 0; i < n; i++)
    {
        get(temp);
        one += (temp == 1);
        other += (temp != 1 ? temp - 1 : 0);
    }
    cout << (other >= one and !flag ? "YES" : "NO") << line;
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