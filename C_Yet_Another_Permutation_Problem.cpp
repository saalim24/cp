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
    vector<int> v;
    vector<int> hash(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n;)
        {
            if (hash[j] == 0)
            {
                v.push_back(j);
                hash[j]++;
            }
            j *= 2;
        }
    }
    for (auto i : v)
        cout << i << " ";
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