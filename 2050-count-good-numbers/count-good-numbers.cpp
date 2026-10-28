class Solution {
public:
    long long calculatepower(int a,long long b) {
    long long mod = 1000000007;
    if (b == 0) return 1;
    long long half = calculatepower(a,b/2);
    if (b%2 == 0) return (half*half)%mod;
    else return (((a*half)%mod)*half)%mod;
}
    int countGoodNumbers(long long n) {
        long long mod = 1000000007;
        if (n%2 == 0) {
            return ((calculatepower(5,n/2)%mod)*(calculatepower(4,n/2)%mod))%mod;
        } else {
            return ((calculatepower(5,(n/2)+1)%mod)*(calculatepower(4,n/2)%mod))%mod;
        }
    }
};