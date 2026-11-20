class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        int n1=nums1.size(),n2=nums2.size(),n3=nums3.size();
        unordered_map<int,int> x,y,z;
        for(int i=0;i<n1;i++){
            x[nums1[i]]=1;
        }
        for(int i=0;i<n2;i++){
            y[nums2[i]]=1;
        }
        for(int i=0;i<n3;i++){
            z[nums3[i]]=1;
        }
        vector<int> ans;
        for(int i=1;i<=100;i++){
            if((x[i]&&y[i]) || (x[i]&&z[i]) || (y[i]&&z[i])){
                ans.push_back(i);
            }
        }
        return ans;
    }
};