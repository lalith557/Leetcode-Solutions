class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maxValue = 0;

        for (string s : strs) {
            if (isInteger(s)) {
                maxValue = max(maxValue, convert(s));
            } else {
                maxValue = max(maxValue, (int)s.size());
            }
        }
        return maxValue;
    }

    bool isInteger(string s) {
        for (char c : s) {
            if (!isdigit(c)) return false;
        }
        return true;
    }

    int convert(string s) {
        int num = 0;
        for (char c : s) {
            num = num * 10 + (c - '0');
        }
        return num;
    }
};