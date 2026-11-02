class Solution {
public:
    long long callcm(long long a, long long b) { return (a / gcd(a, b)) * b; }
    int maxLength(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            long double product = 1;
            long long gcdd = nums[i];
            long long lcmm = nums[i];

            for (int j = i; j < nums.size(); j++) {
                product *= (nums[j]);
                gcdd = gcd(gcdd, nums[j]);
                lcmm = callcm(lcmm, nums[j]);

                // if (fabs(product - (log(lcmm) + log(gcdd))) < 1e-9) {
                //     ans = max(ans, j - i + 1);
                // }
                if (product == lcmm*gcdd) ans = max(ans,j-i+1);
                if (product > lcmm*gcdd) break;
            }
            
        }
        return ans;
    }
};