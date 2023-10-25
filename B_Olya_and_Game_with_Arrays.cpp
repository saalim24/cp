#include <bits/stdc++.h>
using namespace std;

#define line '\n'
#define all(a) a.begin(), a.end()
#define get(n) \
    int n;     \
    cin >> n
using ll = long long;
using ull = unsigned long long;
using lld = long double;
#define int ll

void solve()
{
    get(n);
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        get(k);
        vector<int> v(k);
        for (auto &j : v)
            cin >> j;
        sort(all(v));
        a[i] = v[0];
        b[i] = v[1];
    }
    sort(all(b));
    b[0] = min(*min_element(all(a)), b[0]);
    cout << accumulate(all(b), 0ll) << line;
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