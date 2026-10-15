class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<bool> isprime(n+1,true);
        isprime[0] = isprime[1] = false;
        for (int i = 2; i < isprime.size() ; i++) {
            for (long long j = 1LL*i*i ; j < isprime.size() ; j+=i) {
                isprime[j] = false;
            }
        }
        vector<vector<int>> ans;
        for (int i = 2 ; i< isprime.size() ; i++) {
            if (isprime[i] && isprime[n-i] && (i <= n - i)) {
                ans.push_back({i,n-i});
            }
        }
        
        return ans;
    }
};