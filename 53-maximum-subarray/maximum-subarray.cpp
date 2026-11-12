class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur = nums[0];
        int max_sum = nums[0];
        for (int i = 1 ; i< nums.size();i++) {
            cur = max(cur+nums[i],nums[i]);
            max_sum = max(max_sum,cur);
        }
        return max_sum;
    }
};