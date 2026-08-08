#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int N = n + n;
    vector<bool> prime(N + 1, true);

    for (int i = 2; i <= N; i++)
    {
        if (prime[i])
        {
            for (int j = i + i; j <= N; j += i)
            {
                prime[j] = false;
            }
        }
    }

    if (prime[n])
    {
        cout << n << endl;
    }
    else
    {
        for (int i = n; i <= N; i++)
        {
            if (prime[i])
            {
                cout << i << endl;
                break;
            }
        }
    }
}