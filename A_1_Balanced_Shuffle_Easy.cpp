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
bool cmp(tuple<int, int, char> a, tuple<int, int, char> b)
{
    if (get<0>(a) != get<0>(b))
    {
        return get<0>(a) < get<0>(b);
    }

        return get<1>(a) > get<1>(b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<tuple<int, int, char>> v;

    int balance = 0;

    for (int i = 0; i < s.size(); i++)
    {
        v.push_back({balance, i, s[i]});

        if (s[i] == '(')
        {
            balance++;
        }
        else
        {
            balance--;
        }
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < v.size(); i++)
    {
        cout << get<2>(v[i]);
    }

    cout << endl;

    return 0;
}