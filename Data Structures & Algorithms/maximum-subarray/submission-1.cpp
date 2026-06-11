class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cur = nums[0];
        int maxi = nums[0];
        for(int i = 1 ; i <nums.size() ; i++)
        {
            cur = max(nums[i] ,cur + nums[i]);
            maxi = max(maxi , cur);

        }
        return maxi;

    }
};
