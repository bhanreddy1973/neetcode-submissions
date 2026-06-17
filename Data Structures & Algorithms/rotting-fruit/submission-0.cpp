class Solution {
public:
    int orangesRotting(vector<vector<int>>& g) {
        queue<pair<int,int>> q;
        int f = 0;
        int t = 0;
        for(int i = 0 ; i<g.size() ; i++ )
        {
            for(int j = 0 ; j < g[0].size() ; j++)
            {
                if(g[i][j] == 1) f++;
                if(g[i][j] ==  2) q.push({i,j});
             }
        }

        vector<pair<int,int>> dir = {{0,1},{1,0},{-1,0},{0,-1}};
        while(f > 0 && !q.empty())
        {
            int l = q.size();
            for(int i = 0 ; i < l ; i++)
            {
                auto curr =q.front();
                q.pop();
                int r = curr.first;
                int c = curr.second;
                for(auto[x,y] : dir)
                {
                    int rx = r + x;
                    int cy = c + y;
                    if(rx >= 0 && rx < g.size() && cy >= 0 && cy < g[0].size() && g[rx][cy] == 1 )
                    {
                        g[rx][cy] = 2;
                        q.push({rx,cy});
                        f--;
                    }
                }
            }
            t++;
        }
        return f == 0 ? t : -1;
    }
};
