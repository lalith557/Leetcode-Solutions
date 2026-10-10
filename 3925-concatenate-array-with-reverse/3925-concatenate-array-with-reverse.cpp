class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>ans(nums);
        reverse(nums.begin(), nums.end());
        for(int i : nums)
            ans.push_back(i);
            
        return ans;
    }
};