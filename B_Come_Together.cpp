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

struct Point
{
    int x = 0;
    int y = 0;
};

double dist(const Point &a, const Point &b)
{
    return std::hypot(a.x - b.x, a.y - b.y);
}

void solve()
{
    gett(h1, h2);
    gett(b1, b2);
    gett(c1, c2);
    Point home = {h1, h2}, Bhome = {b1, b2}, Chome = {c1, c2};
    if (((Bhome.x <= home.x and Chome.x >= home.x) and ((Bhome.y <= home.y and Chome.y >= home.y) or Bhome.y >= home.y and Chome.y <= home.y)) or ((Bhome.x >= home.x and Chome.x <= home.x) and ((Bhome.y >= home.y and Chome.y <= home.y) or Bhome.y <= home.y and Chome.y >= home.y)))
    {
        cout << 1 << line;
    }
    else if (Bhome.x < home.x and Chome.x > home.x or (Bhome.x > home.x and Chome.x < home.x))
    {
        cout << 1 + abs(min(abs(Bhome.y - home.y), abs(Chome.y - home.y))) << line;
    }
    else if (Bhome.y < home.y and Chome.y > home.y or (Bhome.y > home.y and Chome.y < home.y))
    {
        cout << 1 + abs(min(abs(Bhome.x - home.x), abs(Chome.x - home.x))) << line;
    }
    else
    {
        cout << 1 + abs(min(abs(Bhome.x - home.x), abs(Chome.x - home.x)) + min(abs(Bhome.y - home.y), abs(Chome.y - home.y))) << line;
    }
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