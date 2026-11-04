class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word = "";
        for (int i = 0 ; i < s.size() ; i++) {
            if (isalpha(s[i]) != 0) {
                word+=s[i];
                if (i == s.size() - 1) words.push_back(word);
            } else {
                words.push_back(word);
                word = "";
            }
        }
        if (words.size() != pattern.size()) return false;
        unordered_map<string,char> mp1;
        unordered_map<char,string> mp2;
        for (int i = 0 ; i < words.size() ; i++) {
            if (mp1.find(words[i]) != mp1.end()) {
                if (mp2[pattern[i]] != words[i]) {
                    return false;
                }
            }
            if (mp2.find(pattern[i]) != mp2.end()) {
                if (mp1[words[i]] != pattern[i]) {
                    return false;
                }
            }
            mp1[words[i]] = pattern[i];
            mp2[pattern[i]] = words[i];
        }
        return true;
    }
};