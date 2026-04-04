class MinStack {
public:
    stack<int> st, temp;

    MinStack() {}

    void push(int val) {
        st.push(val);

        if (temp.empty() || val <= temp.top()) {
            temp.push(val);
        }
    }
    
    void pop() {
        if (st.top() == temp.top()) {
            temp.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return temp.top();
    }
};