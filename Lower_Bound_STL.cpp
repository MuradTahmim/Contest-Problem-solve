#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;

        int idx = lower_bound(v.begin(), v.end(), x) - v.begin();

        auto found = find(v.begin(), v.end(), x);
        
        if (found == v.end())
        {
            cout << "No ";
            cout << idx + 1 << endl;
        }
        else
        {
            cout << "Yes ";
            cout << idx + 1 << endl;
        }
    }

    return 0;
}