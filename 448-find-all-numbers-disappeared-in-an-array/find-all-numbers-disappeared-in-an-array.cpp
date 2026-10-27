class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
        for (auto k:nums) {
            mp[k]++;
        }
        vector<int> v;
        for (int i = 1; i <= nums.size() ; i++) {
            if (mp[i] == 0) v.push_back(i);
        }
        return v;
    }
};