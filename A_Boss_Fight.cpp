#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const double PI = acos(-1.0);
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
#define MOD 1000000007

void solve()
{
    int n;
    cin >> n;

    map<int, int> freq;
    ll sum = 0;

    int mx = 0;
    int val = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;

        freq[x]++;

        if (freq[x] > mx)
        {
            mx = freq[x];
            val = x;
        }
    }

    int more = n - mx;

    if (mx <= more + 1)
    {
        cout << sum << endl;
    }
    else
    {
        ll ans = (sum - 1LL * val * mx) + 1LL * val * (more + 2);
        cout << ans << endl;
    }
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