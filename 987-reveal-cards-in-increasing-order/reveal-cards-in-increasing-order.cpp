class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        vector<int> resultant_array(deck.size(),-1);
        deque<int> dq;
        for (int i = 0 ; i < deck.size() ; i++) {
            dq.push_back(i);
        }
        for (int i = 0 ;i < deck.size() ; i++) {
            resultant_array[dq.front()] = deck[i];
            dq.pop_front();
            if (!dq.empty()) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        return resultant_array;
    }
};