class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n = t.size();
        vector<int> nge(n);
        stack<pair<int,int>> s;
        for(int r = n-1 ; r >= 0 ; r-- )
        {
            while(!s.empty() && t[r] >= s.top().first) s.pop();
            if(s.empty()) nge[r] = 0;
            else nge[r] = s.top().second - r;
            
            s.push({t[r],r});
        }
        return nge;
    }
};
