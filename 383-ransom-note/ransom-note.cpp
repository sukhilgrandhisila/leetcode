class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> ump;
        int count = 0;
        for (auto k:magazine) ump[k]++;
        for (auto k:ransomNote) {
            if (ump.find(k) != ump.end()) {
                count++;
                if (ump[k] == 1) ump.erase(k);
                else ump[k]--;
            }
        }
        return count == ransomNote.size();
    }
};