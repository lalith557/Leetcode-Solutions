class Solution {
public:
    int differenceOfSums(int n, int m) {
        int for_n=0;
        int for_m=0;
        for(int i=1;i<=n;i++) {
            if(i%m!=0) {
                for_n+=i;
            }
        }
        for(int i=1;i<=n;i++) {
            if(i%m==0) {
                for_m+=i;
            }
        }
        return for_n-for_m;
    }
};