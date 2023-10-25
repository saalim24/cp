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

void solve()
{
    get(n);
    get(k);
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    if (v.front() == v.back() and count(all(v), v.front()) >= k)
    {
        cout << "YES" << line;
        return;
    }
    int f{}, l{};
    for (int i = 0; i < n; i++)
    {
        f += v[i] == v.front();
        if (f >= k)
        l += v[i] == v.back();
    }
    cout << ((f >= k and l >= k) ? "YES" : "NO") << line;
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