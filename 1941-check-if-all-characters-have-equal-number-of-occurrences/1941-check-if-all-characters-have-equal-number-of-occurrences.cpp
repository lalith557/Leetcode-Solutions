
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }
        int temp = 0;
        for (int i = 0; i < 26; i++) {
            if (temp == 0) {
                temp = freq[i];
            }
            if (freq[i] != temp && freq[i] != 0) {
                return false;
            }
        }
        return true;
    }
};