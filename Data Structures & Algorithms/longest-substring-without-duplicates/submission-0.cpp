class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> u ;
        int l = 0 ,best =0;
        for(int r = 0 ; r < s.size() ; r++)
        {
            char c = s[r];
            if(u.count(c) && u[c] >= l)
            {
                l = u[c] + 1;
            }
            u[c] = r;
            best = max(best , r - l + 1);
        }
        return best;
    }
};
