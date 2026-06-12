class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = INT_MAX;
        int total = 0;
        for(auto i : prices)
        {
            total = max(total , i - maxi);
            maxi = min(maxi, i);
        }
        return total;
    }
};
