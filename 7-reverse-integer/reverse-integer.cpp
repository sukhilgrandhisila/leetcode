class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        int k = x;
        while (k!=0) {
            int digit = k%10;
            k = k/10;
            if (ans > INT_MAX/10 || (ans == INT_MAX/10 && digit > 7)) return 0;
            else if (ans < INT_MIN/10 || (ans == INT_MIN/10 && digit < -8)) return 0;
            ans = ans*10 + digit;
        }
        return ans;
    }
};