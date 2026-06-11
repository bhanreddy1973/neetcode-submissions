class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        long long a = 1;
        int n = nums.size();
        int z = 0;

        for (auto i : nums)
        {
            if (i != 0)
                a *= i;
            else
                z++;
        }

        vector<int> ans;

        if (z > 1)
        {
            return vector<int>(n, 0);
        }
        else if (z == 1)
        {
            for (auto i : nums)
            {
                if (i == 0)
                    ans.push_back(a);
                else
                    ans.push_back(0);
            }
        }
        else
        {
            for (auto i : nums)
            {
                ans.push_back(a / i);
            }
        }

        return ans;
    }
};