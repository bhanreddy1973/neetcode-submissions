class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        int e = edges.size();
        if( e != n -1)return false;
        vector<vector<int>> adj(n);
        for(auto& e : edges)
        {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);

        } 
        unordered_set<int> vis ;
        queue<pair<int,int>> q ;
        q.push({0,-1});
        vis.insert(0);
        while(!q.empty()){
            auto [node , parent] = q.front();
            q.pop();
            for(int nei : adj[node])
            {
                if(nei == parent) continue;
                if(vis.count(nei)) return false;
                vis.insert(nei);
                q.push({nei,node});
            }
        }
    return vis.size() == n;
    }
};
