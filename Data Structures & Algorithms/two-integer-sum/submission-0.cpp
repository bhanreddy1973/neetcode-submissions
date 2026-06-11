class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int n = nums.size();
        unordered_map<int,int> s ;

        for(int i = 0 ; i < n ; i++)
        {
            int a = t - nums[i];
            if(s.count(a))
            {
                return {s[a],i};
            }
            s[nums[i]] = i;
        }
        return {-1,-1};
    }
};
