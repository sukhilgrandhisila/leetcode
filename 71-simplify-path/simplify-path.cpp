class Solution {
public:
    string simplifyPath(string path) {
        stack<string> stk;
        stringstream ss(path);
        string component;
        while (getline(ss, component, '/')) {
            if (component.empty() || component == ".") {
                continue;
            } else if (component == "..") {
                if (!stk.empty()) {
                    stk.pop();
                }
            } else {
                stk.push(component);
            }
        }
        string ans;
        while (!stk.empty()) {
            ans = "/" + stk.top() + ans;
            stk.pop();
        }
        return ans.size() ? ans : "/";
    }
};