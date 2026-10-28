class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        stack<int> stk;
        int k = x;
        while (k!= 0) {
            stk.push(k%10);
            k = k/10;
        }
        long long reversed_number = 0;
        long long multiplier = 1;
        while (!stk.empty()) {
            reversed_number = reversed_number + multiplier*stk.top();
            multiplier = multiplier*10;
            stk.pop();
        }
        return reversed_number == x;
    }
};