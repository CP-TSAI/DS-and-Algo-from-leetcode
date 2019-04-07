class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(), deck.end(), [](int a, int b)->bool{return a > b;});
        deque<int> deq;
        deq.push_back(deck[0]);
        for (int i = 1; i < deck.size(); i++) {
            deq.push_front(deq.back());
            deq.pop_back();
            deq.push_front(deck[i]);
        }
        vector<int> res(deq.begin(), deq.end());
        return res;
    }
};