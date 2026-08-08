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

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> prefix_sum(v.size());
    prefix_sum[0] = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        prefix_sum[i] = v[i] + prefix_sum[i - 1];
    }
    int m;
    cin >> m;
    while (m--)
    {
        int q;
        cin >> q;
        cout << lower_bound(prefix_sum.begin(), prefix_sum.end(), q) - prefix_sum.begin() + 1 << endl;
    }

    return 0;
}