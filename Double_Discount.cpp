#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define mii map<int, int>
#define mll map<ll, ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define sorta(x) sort(x.begin(), x.end());
#define sorti(x) sort(x.begin(), x.end(), greater<int>());
#define sortd(x) sort(x.begin(), x.end(), greater<decltype(*x.begin())>())
#define rev(x) reverse(x.begin(), x.end())
#define loop(i, s, n) for (int i = s; i < n; i++)
#define input(x)                \
    vec x(n);                   \
    for (int i = 0; i < n; i++) \
        cin >> x[i];
#define output(x)           \
    for (ll val : x)        \
        cout << val << " "; \
    cout << '\n';
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define spc " "
#define even(x) (x % 2 == 0)
#define odd(x) (x % 2 == 1)
#define pb push_back
#define pob pop_back
#define endl '\n'
#define f first
#define s second
#define inp(n) \
    int n;     \
    cin >> n
#define inp(a, b) \
    int a, b;     \
    cin >> a >> b
#define mod 998244353
#define debug(a) cout << #a << "-->" << (a) << endl;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        // int mx = 0, mn = INT_MAX;
        int mx, mn;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                mx = max(a[i], a[j]);
                int mn = min(a[i], a[j]);

                int disc = min(mx / 2, 100);
                int cost = mn + (mx - disc);

                if (cost <= k)
                {
                    ans = max(ans, b[i] + b[j]);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}