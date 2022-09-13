#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int main() {
    int n; cin >> n;
    vi a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    vi s(n); 
    for (int i = n-1; i >= 0; --i) {
        s[i] = a[i];
        if (i+1 < n && s[i+1] < s[i]) s[i] = s[i+1];
    }

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        ans = max(ans, a[i]-s[i]);
    }
    cout << ans << endl;
    return 0;
}