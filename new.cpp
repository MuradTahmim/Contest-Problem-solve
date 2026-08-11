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


// ==================================================
//                  STRING FUNCTIONS
// ==================================================

// Case-Insensitive Sorting
void CISort(string &str)
{
    sort(str.begin(), str.end(), [](char a, char b)
    {
        return tolower(a) < tolower(b);
    });
}


// Case-Insensitive Sorting + Uppercase First
void CISortUpper(string &str)
{
    sort(str.begin(), str.end(), [](char a, char b)
    {
        char x = tolower(a);
        char y = tolower(b);

        if (x != y)
            return x < y;

        return a < b;
    });
}


// Convert String to Lowercase
void toLower(string &str)
{
    for (char &c : str)
        c = tolower(c);
}


// Convert String to Uppercase
void toUpper(string &str)
{
    for (char &c : str)
        c = toupper(c);
}


// ==================================================
//                  NUMBER FUNCTIONS
// ==================================================

// Check Prime
bool isPrime(ll n)
{
    if (n < 2)
        return false;

    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}


// GCD
ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}


// LCM
ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}


// ==================================================
//                  VECTOR FUNCTIONS
// ==================================================

// Print Vector
template <typename T>
void printVec(vector<T> &v)
{
    for (auto x : v)
        cout << x << ' ';

    cout << '\n';
}


// Reverse Sort
template <typename T>
void rsort(vector<T> &v)
{
    sort(v.rbegin(), v.rend());
}


// Minimum Element
template <typename T>
T getMin(vector<T> &v)
{
    return *min_element(v.begin(), v.end());
}


// Maximum Element
template <typename T>
T getMax(vector<T> &v)
{
    return *max_element(v.begin(), v.end());
}


// ==================================================
//                  FREQUENCY
// ==================================================

// Character Frequency
map<char, int> charFreq(string &str)
{
    map<char, int> mp;

    for (char c : str)
        mp[c]++;

    return mp;
}


// ==================================================
//                     MAIN
// ==================================================

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    


    return 0;
}