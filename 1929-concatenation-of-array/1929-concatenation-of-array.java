class Solution {
    public int[] getConcatenation(int[] nums) {
        int n = nums.length;
        int length_for_ans = n*2;
        int[] ans = new int[length_for_ans];
        for(int i=0;i<n;i++) {
            ans[i] = nums[i];
            ans[i+n] = nums[i];
        }
        return ans;
    }
}