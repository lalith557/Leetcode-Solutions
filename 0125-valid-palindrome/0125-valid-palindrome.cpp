class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        while (left < right) {
            if (!isalnum((unsigned char)s[left])) {
                left++;
            }
            else if (!isalnum((unsigned char)s[right])) {
                right--;
            }
            else {
                if (tolower((unsigned char)s[left]) !=
                    tolower((unsigned char)s[right])) {
                    return false;
                }
                left++;
                right--;
            }
        }
        return true;
    }
};