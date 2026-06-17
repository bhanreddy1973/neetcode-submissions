class Solution {


public:
  vector<int> pa;

    int find(int x)
    {

        if(pa[x] == x) return x;
        return pa[x] = find(pa[x]);
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
      pa.resize(n+1);
        for(int i = 0 ; i < n ; i++)
        {
            pa[i] = i;
        }
        for(auto e : edges)
        {
            int u = e[0];
            int v = e[1];
            int pu = find(u);
            int pv = find(v);
            if(pu == pv ) return e;

            pa[pu] = pv;

        }
        return {};
    }
};
