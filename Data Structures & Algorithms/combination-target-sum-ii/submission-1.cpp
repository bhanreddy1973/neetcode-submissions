class Solution {


public:
    void rec(int i , vector<int>& ar,int t ,vector<vector<int>>& ans, vector<int>& ds )
    {

        if (t == 0) {
            ans.push_back(ds);
            return;
        }
        if(i == ar.size())
        {
            if(t == 0) ans.push_back(ds);
             return;
        }
        for(int j = i ; j < ar.size() ; j++)
        {
            if(j > i && ar[j]==ar[j-1]) continue;
            if(ar[j] > t) break ;
            ds.push_back(ar[j]);
            rec(j+1,ar,t-ar[j],ans,ds);
            ds.pop_back();
        }

    }


public:
    vector<vector<int>> combinationSum2(vector<int>& ar, int t) {
              sort(ar.begin(),ar.end());
       vector<vector<int>> ans;
        vector<int> ds;
        rec(0,ar,t,ans,ds);
        return ans;  
    }
};
