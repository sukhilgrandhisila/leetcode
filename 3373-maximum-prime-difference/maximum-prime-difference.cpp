class Solution {
public:
    bool isprime(int n) {
        if (n < 2) return false;
        for (int i = 2 ; i*i <= n ;i++) {
            if (n%i == 0) return false;
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int max_idx = -1;
        int min_idx = INT_MAX;
        for (int i = 0 ; i < nums.size() ; i++) {
            if (isprime(nums[i])) {
                max_idx = max(max_idx,i);
                min_idx = min(min_idx,i);
            }
        }
        return max_idx - min_idx;
    }
};