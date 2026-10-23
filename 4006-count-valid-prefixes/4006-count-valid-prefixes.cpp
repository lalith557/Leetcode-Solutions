class Solution {
public:
    int countValidPrefixes(string s) {
        int c = 0;
        int ans = 0;
        for (auto x : s) {
            if (x == '0') {
                c++;
            }
            else {
                c--;
            }
            if (abs(c) <= 1) {
                ans++;
            }
        }
        return ans;
    }
};