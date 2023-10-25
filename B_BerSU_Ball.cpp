#include <bits/stdc++.h>
using namespace std;

#define line '\n'
#define all(a) a.begin(), a.end()

void solve()
{
    int n, m, count = 0;
    cin >> n;
    vector<int> b(n, 0);
    for (int i = 0; i < n; i++)
        cin >> b[i];
    cin >> m;
    vector<int> g(m, 0);
    for (int i = 0; i < m; i++)
        cin >> g[i];

    vector<int> bh(*max_element(all(b)) + 1);
    vector<int> gh(*max_element(all(g)) + 1);

    for (int i = 0; i < n; i++)
        bh[b[i]]++;
    for (int i = 0; i < m; i++)
        gh[g[i]]++;
    if (bh.size() > gh.size())
    {

        for (int i = 0; i < gh.size(); i++)
        {
            while (gh[i] > 0)
            {
                if (i > 0 and bh[i - 1] > 0)
                {
                    int x = min(bh[i - 1], gh[i]);
                    gh[i] -= x;
                    bh[i - 1] -= x;
                    count += x;
                }
                else if (bh[i] > 0)
                {
                    int x = min(bh[i], gh[i]);
                    bh[i] -= x;
                    gh[i] -= x;
                    count += x;
                }
                else if (i < bh.size() - 1 and bh[i + 1] > 0)
                {
                    int x = min(bh[i + 1], gh[i]);
                    gh[i] -= x;
                    bh[i + 1] -= x;
                    count += x;
                }
                else
                    break;
            }
        }
    }
    else
    {
        for (int i = 1; i < bh.size(); i++)
        {
            while (bh[i] > 0)
            {
                if (i > 0 and gh[i - 1] > 0)
                {
                    int x = min(bh[i], gh[i - 1]);
                    bh[i] -= x;
                    gh[i - 1] -= x;
                    count += x;
                }
                else if (gh[i] > 0)
                {
                    int x = min(bh[i], gh[i]);
                    gh[i] -= x;
                    bh[i] -= x;
                    count += x;
                }
                else if (i < gh.size() - 1 and gh[i + 1] > 0)
                {
                    int x = min(bh[i], gh[i + 1]);
                    bh[i] -= x;
                    gh[i + 1] -= x;
                    count += x;
                }
                else
                    break;
            }
        }
    }
    cout << count;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
}