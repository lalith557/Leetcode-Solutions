class Solution {
public:
    string capitalizeTitle(string title) {
        int n = title.size();

        for(int i = 0; i < n; i++){
            title[i] = tolower(title[i]);
        }

        int start = 0;

        for(int i = 0; i <= n; i++){
            if(i == n || title[i] == ' '){
                if(i - start > 2){
                    title[start] = toupper(title[start]);
                }
                start = i + 1;
            }
        }

        return title;
    }
};