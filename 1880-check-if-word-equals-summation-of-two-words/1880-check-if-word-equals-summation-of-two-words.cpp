class Solution {
public:
    bool isSumEqual(std::string firstWord, std::string secondWord, std::string targetWord) {
        return getValue(firstWord) + getValue(secondWord) == getValue(targetWord);
    }
    int getValue(const std::string& word) {
        std::string s = "";
        for (char c : word) {
            s += std::to_string(c - 'a');
        }
        return std::stoi(s);
    }
};