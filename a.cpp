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
    vector<int> ans(n);
    ans[0] = 1;
    get(first);
    int last = first;
    bool issort = true;
    for (int i = 1; i < n; i++)
    {
        get(now);
        if (now >= last and issort)
        {
            ans[i] = 1;
            last = now;
            continue;
        }
        else
            issort = false;
        if (now <= last and now <= first and first <= last)
        {
            ans[i] = 1;
            last = now;
        }
        else if (now <= first and first <= now)
        {
            ans[i] = 1;
            last = now;
        }
        else if (now >= last and now <= first)
        {
            ans[i] = 1;
            last = now;
        }
        else
            ans[i] = 0;
    }
    for (auto i : ans)
        cout << i;
    cout << line;
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