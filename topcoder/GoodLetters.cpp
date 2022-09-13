#include <bits/stdc++.h>

using namespace std;

class GoodLetters {
public:
    string construct(string s, int N, int G) {
        unordered_set<char> us(s.begin(), s.end());
        int B = N - G;
        string ans;
        for (int i = 0; i < 26; ++i) {
            char c = (char)(i+'A');
            if (us.find(c) == us.end()) {
                if (B) {
                    ans += c;
                    --B;
                }
            } else {
                if (G) {
                    ans += c;
                    --G;
                }
            }
        }
        if (ans.size() != N) return "";
        return ans;
    }
};

// int main() {
//     GoodLetters s;
//     cout << s.construct("AEIOU", 10, 3) << endl;
//     return 0;
// }