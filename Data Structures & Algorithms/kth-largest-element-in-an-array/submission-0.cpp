class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> ma(nums.begin(),nums.end());
        int  l;
        while(k--)
        {
            l = ma.top();
            ma.pop();
        }
        return l;        
        
    }
};
