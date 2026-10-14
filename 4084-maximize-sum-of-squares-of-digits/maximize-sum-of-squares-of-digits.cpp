class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans = "";
        while (sum>=9 && ans.size() < num) {
            ans += '9';
            sum -= 9;
        }
        if (sum > 0 && ans.size() < num) {
            ans+=char('0'+sum);
            sum = 0;
        }
        while (ans.size() < num) {
            ans+='0';
        }
        if (sum > 0) return "";
        return  ans;
    }
};