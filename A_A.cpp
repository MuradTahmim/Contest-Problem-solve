#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    vector<long long int> ans;
    int sq = sqrt(n);
    for (int i = 1; i <= sq; i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
            ans.push_back(n / i);
        }
    }
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    for (auto val : ans)
    {
        cout << val << endl;
    }
}
