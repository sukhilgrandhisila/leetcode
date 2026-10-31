class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ele = tickets[k];
        int count = 0;
        queue<pair<int,int>> q;
        for (int i = 0 ;i < tickets.size() ;i++) {
            if (i == k) q.push({tickets[i],-1});
            else q.push({tickets[i],0});
        }
        while (!q.empty() && true) {
            auto ele = q.front();
            q.pop();
            if (ele.first != 0) ele.first -= 1;
            if (ele.second == -1 && ele.first == 0) return count + 1;
            if (ele.first != 0) q.push(ele);
            // q.push(ele);
            count+=1;
        }
        return count + 1;
    }
};