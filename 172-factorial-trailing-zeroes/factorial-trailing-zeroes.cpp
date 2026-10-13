class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        for (int i = 5 ; i <= n ;i++) {
            int digit = i;
            if (digit%5 == 0) {
                while (digit%5==0) {
                    count+=1;
                    digit = digit/5;
                }
            }
        }
        return count;
    }
};