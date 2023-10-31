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
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    map<int, int> mp;
    for (auto i : v)
    {
        mp[i]++;
    }
    sort(all(v));
    if (mp.size() == 1)
    {
        cout << "YES" << line;
        return;
    }
    cout << (mp.size() == 2 and abs(mp[v[0]] - mp[v.back()]) < 2 ? "YES" : "NO") << line;
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