class Solution {
public:
    int gcdhelper(int a,int b) {
        while (a!=0 && b!=0) {
            if (a > b) a = a%b;
            else b = b%a;
        }
        return (a == 0 ? b : a);
    }
    int smallestEvenMultiple(int n) {
        return 2*n/gcdhelper(2,n);
    }
};