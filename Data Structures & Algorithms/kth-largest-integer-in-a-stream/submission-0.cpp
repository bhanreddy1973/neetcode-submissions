class KthLargest {
    private:
    priority_queue<int ,vector<int> , greater<int>> mih ;
    int k;
public: 
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for(auto i : nums)
        { 
            mih.push(i);
            if(mih.size()>k)
            {
                mih.pop();
            }
        }
        
    }
    
    int add(int val) {
        mih.push(val);
        if(mih.size() > k )
        {
            mih.pop();
        }
        return mih.top();
    }
};
