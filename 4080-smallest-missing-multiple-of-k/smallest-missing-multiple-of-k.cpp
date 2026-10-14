class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> us(nums.begin(),nums.end());
        int i = 1;
        while (true) {
            if (us.find(k*i) == us.end()) {
                return k*i;
            }
            i++;
        }
    }
};