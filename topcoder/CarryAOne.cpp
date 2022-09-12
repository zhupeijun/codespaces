#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

class CarryAOne {
public:
     ll count(int B, int D) {
        ll tot = 1;
        for (int i = 0; i < D; ++i) {
            if (i == 0) tot *= (B-1);
            else tot *= B;
        }
        tot *= tot;

        ll single = 0;
        for (int i = 0; i < B; ++i) {
            single += B-i;
        }

        ll first = 0;
        for (int i = 1; i < B; ++i) {
            first += B-i-1;
        }

        ll remove = 1;
        for (int i = 0; i < D; ++i) {
            if (i == 0) remove *= first;
            else remove *= single;
        }
        return tot - remove;
    }
};

// int main() {
//     CarryAOne s;
//     cout << s.count(2,5) << endl;
//     return 0;   
// }