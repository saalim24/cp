#include <bits/stdc++.h>
using namespace std;

#define line '\n'
#define all(a) a.begin(), a.end()

void solve()
{
    int n, count = 0;
    cin >> n;
    vector<vector<char>> v(n, vector<char>(n));
    for (auto &i : v)
        for (auto &j : i)
            cin >> j;
    vector<char> rows;
    vector<char> cols;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            rows.push_back(v[i][j]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
            cols.push_back(v[j][i]);
    }
    for (int i = 0; i < n * n; i++)
    {
        count += abs(rows[i] - cols[i]);
    }
    cout << count << line;
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