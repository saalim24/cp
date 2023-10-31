#include <iostream>
#include <fstream>
#include <vector>

#define line '\n'
#define all(a) a.begin(), a.end()
#define get(_24) \
    int _24;     \
    input >> _24
#define gett(_08, _09) \
    int _08, _09;      \
    input >> _08 >> _09
#define gettt(_10, _11, _12) \
    int _10, _11, _12;       \
    input >> _10 >> _11 >> _12

using ll = long long;
using ull = unsigned long long;
using lld = long double;

void solve(std::istream &input, std::ostream &output)
{
    gettt(n, m, k);
    std::vector<std::vector<char>> in(n, std::vector<char>(m));
    for (auto &ii : in)
        for (auto &jj : ii)
            input >> jj;
    int o = 0, t = 0;
    std::vector<std::vector<char>> v(n * k, std::vector<char>(m * k));
    for (int i = 0; i < n * k; i += k)
    {
        for (int j = 0; j < m * k; j += k)
        {
            for (int x = i; x <= i + k and x < n * k; x++)
            {
                for (int y = j; y <= j + k and y < m * k; y++)
                {
                    if (o < n and t < m)
                        v[x][y] = in[o][t];
                    else
                        break;
                }
            }
            t++;
        }
        t = 0;
        o++;
    }
    for (int i = 0; i < n * k; i++)
    {
        for (int j = 0; j < m * k; j++)
        {
            output << v[i][j];
        }
        output << line;
    }
}

int main()
{
    std::ifstream inputFile("cowsignal.in");
    std::ofstream outputFile("cowsignal.out");

    solve(inputFile, outputFile);

    inputFile.close();
    outputFile.close();
}
