class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max = nums[0], count=0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] > max) max = nums[i];
        }
        for(int j=0;j<nums.size();j++) {
            count += (max-nums[j]);
        }
        return count;
    }
};