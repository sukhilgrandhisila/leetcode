class Solution {
public:
    string longestCommonPrefix(vector<string>& words) {
        int n = words.size();
        string ans = "";
        bool condition = true;
        for (int i = 0; i < words[0].size(); i++) {
            char c = words[0][i];
            int j = 0;
            while (j < n) {
                if (c != words[j][i]) {
                    condition = false;
                }
                j++;
            }
            if (condition == false)
                return ans;
            ans += c;
        }
        return ans;
    }
}
;