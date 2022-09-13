#include <bits/stdc++.h>

using namespace std;

int main() {
    while (true) {
        int n, m;
        cin >> n >> m;
        if (n == 0 && m == 0) break;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        sort(a.begin(), a.end());

        int ans = -1;
        for (int i = 0; i < n; ++i) {
            int o = m - a[i];
            if (o < a[i]) continue;
            auto it = upper_bound(a.begin()+i+1, a.end(), o);
            --it;
            if (it != a.begin()+i) {
                ans = max(ans, a[i]+(*it));
            }
        }
        if (ans == -1) cout << "NONE" << endl;
        else cout << ans << endl;
    }
    return 0;
}