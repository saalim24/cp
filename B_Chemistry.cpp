#include <bits/stdc++.h>
using namespace std;

#define line '\n'
#define all(a) a.begin(), a.end()

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> h(26);
    for (auto i : s)
        h[i - 'a']++;
    int count = k;
    for (int i = 0; i < 26; i++)
    {
        if (h[i] == 0)
            continue;
        if (h[i] % 2)
            count--;
    }
    cout << (count > -2 ? "YES" : "NO") << line;
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