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
    cin>>n;
    string s;
    cin>>s;
    if(n%2==1)
    {
        cout<<"NO\n";
        return;
    }
    int cnt1=0,cnt2=0;
    for(char c:s)
    {
        if(c=='(')
            cnt1++;
        else
            cnt2++;
    }
    if(cnt1==cnt2)
        cout<<"YES\n";
    else
        cout<<"NO\n";
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