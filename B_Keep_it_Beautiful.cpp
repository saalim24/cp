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
    get(first);
    bool ok = false;
    int last = first;
    cout << 1;
    for (int i = 1; i < n; i++)
    {
        get(curr);
        if (ok)
        {
            if (curr >= last and curr <= first)
            {
                cout << 1;
                last = curr;
            }
            else
            {
                cout << 0;
            }
        }
        else
        {
            if (curr >= last)
            {
                cout << 1;
                last = curr;
            }
            else if (first >= curr and curr <= last)
            {
                cout << 1;
                ok = true;
                last = curr;
            }
            else
                cout << 0;
        }
    }
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