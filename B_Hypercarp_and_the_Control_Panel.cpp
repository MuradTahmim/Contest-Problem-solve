#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int TestsNumT;
    cin >> TestsNumT;

    while (TestsNumT--) {
        int n;
        cin >> n;
        vector<int> a(n + 1);

        for (int i = 1; i <= n; i++) cin >> a[i];

        vector<int> pre(n + 2), suf(n + 2);

        pre[1] = 1;
        for (int i = 2; i <= n; i++) {
            pre[i] = pre[i - 1] + (a[i] != a[i - 1]);
        }

        suf[n] = 1;
        for (int i = n - 1; i >= 1; i--) {
            suf[i] = suf[i + 1] + (a[i] != a[i + 1]);
        }

        int ans = pre[n];

        for (int i = 1; i < n; i++) {
            if (a[i] == a[i + 1]) continue;

            vector<int> v;
            for (int j = max(1, i - 1); j <= min(n, i + 2); j++) v.push_back(a[j]);

            auto calc = [&](vector<int> t) {
                int cnt = 1;
                for (int k = 1; k < (int)t.size(); k++)
                    cnt += (t[k] != t[k - 1]);
                return cnt;
            };

            int before = calc(v);

            swap(v[min(1, (int)v.size() - 1)], v[min(2, (int)v.size() - 1)]);

            int after = calc(v);

            int cur = pre[n] + (after - before);
            ans = max(ans, cur);
        }

        cout << ans << "\n";
    }

    return 0;
}