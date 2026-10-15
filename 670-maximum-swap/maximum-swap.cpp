class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        int v[10];
        for (int i = 0 ; i < s.size() ; i++) {
            v[s[i] - '0'] = i;
        }
        for (int i = 0 ; i < s.size() ;i++) {
            for (int d = 9 ; d > s[i] - '0' ; d--) {
                if (v[d] > i) {
                    swap(s[i],s[v[d]]);
                    return stoi(s);
                }
            }
        }
        return num;
    }
};