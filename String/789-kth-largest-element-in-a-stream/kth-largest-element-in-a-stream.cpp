class KthLargest {
public:
    int k;
    priority_queue<int, vector<int>, greater<int>> pq; // min heap
   
    KthLargest(int k, vector<int>& nums) {

        // like constructor

        this->k = k;

        for (auto x : nums) {
            add(x);
        }
    }

    int add(int val) {

        if (pq.size() < k) {
            pq.push(val);
        } else {

            if (val > pq.top()) {
                pq.pop();
                pq.push(val);
            }
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */