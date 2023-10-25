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
using ll = long long;
using ull = unsigned long long;
using lld = long double;

void solve()
{
    get(n);
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    int andd = v[0], count = 1;
    for (int i = 0; i < n; i++)
    {
        andd &= v[i];
        if (andd == 0)
        {
            if (i == n - 1)
                break;
            count++;
            if (i < n - 1)
            {
                andd = v[i + 1];
            }
        }
        if (i == n - 1)
        {
            if (andd != 0)
            {
                if (v[i] != 0)
                    count--;
            }
        }
    }
    cout << max(1, count) << line;
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