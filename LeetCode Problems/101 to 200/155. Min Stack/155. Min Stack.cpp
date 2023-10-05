class MinStack {
public:
    void push(int val) {
        int min_idx = size(arr);
        if (!empty(arr) && getMin() < val) {
            min_idx = arr.back().second;
        }
        arr.emplace_back(val, min_idx);
    }

    void pop() { arr.pop_back(); }

    int top() { return arr.back().first; }

    int getMin() { return arr[arr.back().second].first; }

private:
    vector<pair<int, int>> arr;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
