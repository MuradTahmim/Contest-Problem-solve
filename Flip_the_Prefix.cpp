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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    long long sum = 0;
    int ind1 = -1, ind2 = -1;

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] < 0)
        {
            ind2 = i;
            break;
        }
    }
    if (ind2 != -1)
    {
        for (int i = ind2 - 1; i >= 0; i--)
        {
            if (a[i] > 0)
            {
                ind1 = i;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum += abs(a[i]);
    }
    cout << sum << endl;

    if (ind1 != -1 && ind2 != -1)
        cout << ind1 + 1 << " " << ind2 + 1 << endl;
    else if (ind2 != -1 && ind1 == -1)
        cout << ind2 + 1 << endl;
        
    return 0;
}