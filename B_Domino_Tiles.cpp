#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll MOD = 998244353;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    ll oddWays = 0;
    ll evenWays = 0;

    // Odd positions
    // Pattern 0,1,0,1,...
    bool ok1 = true;

    for (int i = 0; i < n; i += 2)
    {
        char need = ((i / 2) % 2 == 0) ? '0' : '1';

        if (s[i] != '?' && s[i] != need)
        {
            ok1 = false;
            break;
        }
    }

    // Odd positions
    // Pattern 1,0,1,0,...
    bool ok2 = true;

    for (int i = 0; i < n; i += 2)
    {
        char need = ((i / 2) % 2 == 0) ? '1' : '0';

        if (s[i] != '?' && s[i] != need)
        {
            ok2 = false;
            break;
        }
    }

    oddWays = ok1 + ok2;

    // Even positions
    // Pattern 0,1,0,1,...
    bool ok3 = true;

    for (int i = 1; i < n; i += 2)
    {
        char need = (((i - 1) / 2) % 2 == 0) ? '0' : '1';

        if (s[i] != '?' && s[i] != need)
        {
            ok3 = false;
            break;
        }
    }

    // Even positions
    // Pattern 1,0,1,0,...
    bool ok4 = true;

    for (int i = 1; i < n; i += 2)
    {
        char need = (((i - 1) / 2) % 2 == 0) ? '1' : '0';

        if (s[i] != '?' && s[i] != need)
        {
            ok4 = false;
            break;
        }
    }

    evenWays = ok3 + ok4;

    cout << (oddWays * evenWays) % MOD << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}