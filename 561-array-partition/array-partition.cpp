class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count = 0;
        for (int i = 0 ; i < nums.size() ; i+=2) {
            count+=min(nums[i],nums[i+1]);
        }
        return count;
    }
};