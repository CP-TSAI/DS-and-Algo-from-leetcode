class KthLargest {
public:
    
    KthLargest(int k, vector<int> nums) {
        kth = k;
        for(auto i: nums){
            pq.push(i);
            if(pq.size() > kth) pq.pop();
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size() > kth) pq.pop();
        return pq.top();
    }

private:
    int kth;
    priority_queue<int, vector<int>, greater<int>> pq;
    
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest obj = new KthLargest(k, nums);
 * int param_1 = obj.add(val);
 */