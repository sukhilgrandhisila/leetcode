class Solution {
public:
    long long makePalindrome(int n) {
        long long result = n;
        n = n / 10;
        while (n != 0) {
            result = result * 10 + n % 10;
            n = n / 10;
        }
        return result;
    }
    bool isPrime(int n) {
        if (n < 2)
            return false;
        if (n % 2 == 0)
            return n == 2;
        for (int i = 3; 1LL * i * i <= n; i += 2) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    int primePalindrome(int n) {
        if (n <= 11) {
            for (int x = n; x <= 11; x++) {
                if (isPrime(x)) return x;
            }
        }
        for (int i = 1;; i++) {
            if (isPrime(makePalindrome(i)) && makePalindrome(i) >= n) {
                return makePalindrome(i);
            }
        }
        return -1;
    }
};