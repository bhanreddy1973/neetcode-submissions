class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<vector<pair<int,int>>> ad(n+1);
        for(auto h :times)
        {
            ad[h[0]].push_back({h[1],h[2]});
        }
        pq.push({0,k});
        vector<int> dis(n+1,INT_MAX);
        dis[k] = 0;

        while(!pq.empty()){
            auto[d,p] = pq.top();
            pq.pop();
            if( d > dis[p]) continue;
            for(auto [it,q] : ad[p])
            {
                if(d + q < dis[it]){
                    dis[it] = d + q;
                pq.push({dis[it],it});
                }

            }
        }
        int ans = 0 ;
        for(int i = 1 ; i <= n ; i++)
        {
            if(dis[i] == INT_MAX) return -1;
            ans = max(ans,dis[i]);
        }
        return ans;
    }
};
