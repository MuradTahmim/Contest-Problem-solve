#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt0 = 0, cnt1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            cnt0++;
        else
            cnt1++;
    }

    cout << min(cnt0, cnt1) << endl;
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