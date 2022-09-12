#include <bits/stdc++.h>

using namespace std;

class Sum21 {
public:
    int countWays(vector<int> a) {
        int n = a.size(), ans = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = i+1; j < n; ++j) {
                if (a[i]+a[j] == 21) {
                    ++ans;
                }
            }
        }
        return ans;
    }
};