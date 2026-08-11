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
#define MOD 1000000007
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, t;
    cin >> s >> t;

    sort(s.begin(), s.end(), [](char a, char b)
         {
    char x = tolower(a);
    char y = tolower(b);

    if (x != y)
        return x < y;

    return a < b; });

    sort(t.begin(), t.end(), [](char a, char b)
         {
    char x = tolower(a);
    char y = tolower(b);

    if (x != y)
        return x < y;

    return a < b; });

    ll yc = 0, wc = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == t[i])
        {
            yc++;
        }
        else
        {
            wc++;
        }
    }

    // cout << s << spc << t << endl;

    cout << yc << spc << wc << endl;

    return 0;
}