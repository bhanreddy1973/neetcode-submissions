class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int l = 0 ; 
        int r = n-1 ;
        int m  = -1;
        while(l < r)
        {
             m = l + (r - l)/2;
            if(nums[r] < nums[m] )
            {
                l = m + 1;
            }else
            r =m ;
        }
        return nums[l];
    }
};
