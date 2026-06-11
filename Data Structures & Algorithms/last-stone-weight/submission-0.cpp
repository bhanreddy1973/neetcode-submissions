class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> mih(stones.begin(),stones.end());
        while(mih.size() > 1)
        {
            int x = mih.top();
            mih.pop();
            int y = mih.top();
            mih.pop();
            if(x >y)
            {
                mih.push(x- y);
            }               

        }
        if(mih.empty()) return 0;
        
        return mih.top();
        
    }
};
