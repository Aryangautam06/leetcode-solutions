// ======================================
// LeetCode Problem: min stack
// Language: cpp
// Link: https://leetcode.com/problems/min-stack/
// Synced by: LinkCode
// Date: 23/09/2026, 00:02:46
// ======================================


class MinStack {
public:
    vector<pair<int, int>> st;

    MinStack() {
    }

    void push(int val) {
        if (st.empty()) {
            st.push_back({val, val});
        } else {
            int mini = min(val, st.back().second);
            st.push_back({val, mini});
        }
    }

    void pop() {
        st.pop_back();
    }

    int top() {
        return st.back().first;
    }

    int getMin() {
        return st.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */