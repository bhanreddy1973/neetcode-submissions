class Solution {
public:
    int search(vector<int>& n, int t) {
        int m = n.size();
        int ans = -1;
        int l = 0 ;
        int r = m - 1;
        while(l<=r)
        {
            int m = l + (r - l)/2;
            if(n[m] == t) return m;
            else if(n[m] < t ) l = m + 1;
            else r = m -1; 
        }
        return -1;
    }
};
