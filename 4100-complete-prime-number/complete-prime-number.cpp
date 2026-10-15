class Solution {
public:
    bool isprime(int n) {
        if (n < 2) return false;
        for (int i = 2 ; i * i <= n ; i++) {
            if (n%i == 0) return false;
        }
        return true;
    }
    bool completePrime(int num) {
        string number = to_string(num);
        int n = number.size();
        for (int i = 1 ; i <= n ; i++) {
            if (isprime(stoi(number.substr(0,i))) == false) return false;
            if (isprime(stoi(number.substr(n-i,i))) == false) return false;
        }
        return true;
    }
};