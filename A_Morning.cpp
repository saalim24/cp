#include <bits/stdc++.h>
using namespace std;

#define line '\n'

void solve()
{
    string s;
    cin >> s;
    s[0] == '0' ? s[0] = ':' : s[0];
    int ans = s[0] - '0';
    for (int i = 1; i < 4; i++)
    {
        s[i] == '0' ? s[i] = ':' :s[0];
        ans += abs(s[i] - s[i - 1]) + 1;
    }
    cout << ans << line;
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