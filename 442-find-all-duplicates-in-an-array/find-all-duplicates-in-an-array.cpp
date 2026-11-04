class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_set<int> s;
        for (auto ele:nums) {
            if (s.count(ele)) {
                ans.push_back(ele);
            } else {
                s.insert(ele);
            }
        }
        return ans;
    }
};