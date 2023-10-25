#include <bits/stdc++.h>
using namespace std;

#define line '\n'
#define all(a) a.begin(), a.end()
using ll = long long;
using ull = unsigned long long;
using lld = long double;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (auto &[i, j] : v)
        cin >> i >> j;
    sort(all(v));
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i].second > v[i + 1].second)
        {
            cout << "Happy Alex";
            return;
        }
    }
    cout << "Poor Alex";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}