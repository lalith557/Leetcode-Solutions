class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int, int> freq;
        vector<int> ans;
        for (int x : nums) {
            freq[x]++;
        }
        for (auto x : freq) {
            if (x.second == 2) {
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};