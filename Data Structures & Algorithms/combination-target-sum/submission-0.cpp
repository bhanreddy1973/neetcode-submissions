class Solution {

public:
    void rec(int i , vector<int>& ar,int t ,vector<vector<int>>& ans, vector<int>& ds )
    {
        if(i == ar.size())
        {
            if(t == 0) ans.push_back(ds);
             return;
        }

        if(ar[i] <= t)
        {
            ds.push_back(ar[i]);
            rec(i,ar,t-ar[i],ans,ds);
            ds.pop_back();
        }
        rec(i+1,ar,t,ans,ds);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& ar, int t) {

       vector<vector<int>> ans;
        vector<int> ds;
        rec(0,ar,t,ans,ds);
        return ans;
        
    }
};
