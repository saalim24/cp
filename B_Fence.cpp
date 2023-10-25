#include <bits/stdc++.h>
using namespace std;

#define line '\n'
#define all(a) a.begin(), a.end()
using ll = long long;
using ull = unsigned long long;
using lld = long double;

void solve()
{
    int n, k, sum = 0, ans = INT_MAX, actualans = 1;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    for (int i = 0; i < k; i++)
        sum += v[i];
    ans = min(ans, sum);
    for (int i = k; i < n; i++)
    {
        sum += v[i];
        sum -= v[i - k];
        if (ans > sum)
        {
            ans = sum;
            actualans = i - k + 2;
        }
    }
    cout << max(1, actualans);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}