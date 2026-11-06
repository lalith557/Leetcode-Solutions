class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        sort(nums.begin(), nums.end());
        int max_length = 1;
        int x = 1;
        
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i + 1] == nums[i] + 1) {
                x++;
                if (x > max_length) {
                    max_length = x;
                }
            } else if (nums[i + 1] == nums[i]) {
                continue; 
            } else {
                x = 1;
            }
        }
        return max_length;
    }
};