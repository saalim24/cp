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
#define gettt(_10, _11, _12) \
    int _10, _11, _12;       \
    cin >> _10 >> _11 >> _12
using ll = long long;
using ull = unsigned long long;
using lld = long double;

bool isgood(string a)
{
    for (int i = 1; i < a.length(); i++)
    {
        if (a[i] != a[i - 1])
            continue;
        else
            return false;
    }
    return true;
}

void solve()
{
    gett(a, b);
    string sa, sb;
    cin >> sa >> sb;

    char dig = 'x', twodig = 'x';

    if (isgood(sa))
    {
        cout << "Yes" << line;
        return;
    }
    bool done = false;
    for (int i = 1; i < a; i++)
    {
        if (sa[i] == sa[i - 1] and !done)
        {
            dig = sa[i];
            done = true;
        }
        if (sa[i] == sa[i - 1] and sa[i] != dig)
        {
            twodig = sa[i];
        }
    }
    if (twodig != 'x' and dig != 'x')
    {
        cout << "No" << line;
        return;
    }
    if (isgood(sb))
    {
        if (dig == '1' and sb[b - 1] == '0' and sb[0] == '0')
        {
            cout << "Yes" << line;
            return;
        }
        if (dig == '0' and sb[b - 1] == '1' and sb[0] == '1')
        {
            cout << "Yes" << line;
            return;
        }
    }
    cout << "No" << line;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
}