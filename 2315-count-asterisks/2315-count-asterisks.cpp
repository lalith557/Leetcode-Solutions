class Solution {
public:

    int countAsterisks(string s) {

        bool v = false;

        int star = 0;

        for(auto x : s) {

            if(x == '*' && !v) {

                star++;
            }
            else if(x == '|') {

                v = !v;
            }
        }

        return star;
    }
};