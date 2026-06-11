class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& po, int k) {

        priority_queue< pair<double, int>, vector<pair<double, int>>, greater<pair<double, int>> > mih;
       int co =0;
        for(auto i : po)
        {
            double k = sqrt(pow(i[0],2)+pow(i[1],2));
            mih.push({k,co});
            co++;
        }
        vector<vector<int>> ans;
        while(k--)
        {
            ans.push_back(po[mih.top().second]);
            mih.pop();
        }
        return ans;
    }
};
