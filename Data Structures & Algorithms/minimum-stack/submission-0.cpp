class MinStack {
    vector<int> st;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push_back(val);
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        return st.back();
    }
    
    int getMin() {
        int minvalue =INT_MAX;
        for(int i = 0 ; i < st.size() ; i++){
            minvalue = min(minvalue,st[i]);
        }
        return minvalue;
    }
};
