#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll h, n;
        cin >> h >> n;
        ll a[n + 1], c[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            cin >> c[i];

        ll lo = 1, hi = 1e13, mid, ans = 1e18;
        while (lo <= hi)
        {
            mid = lo + (hi - lo) / 2;
            ll damage = 0;
            for (int i = 1; i <= n; i++)
            {
                damage += a[i] * (1LL + (mid - 1) / c[i]);
            }
            if (damage >= h)
            {
                ans = mid;
                hi = mid - 1;
            }
            else
                lo = mid + 1;
        }
        cout << ans << endl;
    }
}