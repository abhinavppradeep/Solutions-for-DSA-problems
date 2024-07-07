class MyStack {
public:
    MyStack() {
        
    }
    stack<int> st;
    void push(int x) {
        st.push(x);
        for(int i=0;i<st.size()-1;i++){
            st.push(st.top());
            st.pop();
        }
        
    }
    
    int pop() {
        int a = st.top();
        st.pop();
        return a;
    }
    
    int top() {
        return st.top();
    }
    
    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */