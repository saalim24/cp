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
    vector<int> a(n);
    vector<int> b(n);
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;
    int x = n, count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[b[i]] > n)
        {
            count++;
            x = a[b[i]];
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}