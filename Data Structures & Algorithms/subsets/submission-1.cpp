class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans = {{}};
        for(auto n : nums)
        {
            int s = ans.size();
            for(int i = 0 ; i < s ; i++)
            {
                vector<int> sub = ans[i];
                sub.push_back(n);
                ans.push_back(sub);
            }
        }
        return ans;
    }
};
