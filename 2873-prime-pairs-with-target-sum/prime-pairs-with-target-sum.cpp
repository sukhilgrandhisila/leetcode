class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        set<int> us;
        vector<bool> isprime(n+1,true);
        isprime[0] = isprime[1] = false;
        for (int i = 2; i < isprime.size() ; i++) {
            for (long long j = 1LL*i*i ; j < isprime.size() ; j+=i) {
                isprime[j] = false;
            }
        }
        for (int i = 2 ; i< isprime.size() ; i++) {
            if (isprime[i]) {
                us.insert(i);
            }
        }
        vector<vector<int>> ans;
        for (auto k:us) {
            if (us.find(n - k) != us.end()) {
                if (k <= n - k) {
                    ans.push_back({k,n-k});
                }
               
            }
        }
        return ans;
    }
};