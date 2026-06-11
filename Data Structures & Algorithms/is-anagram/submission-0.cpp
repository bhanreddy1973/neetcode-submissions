class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> m ;
        for(auto i : s)
        {
            m[i-'a']++;
        }
        for(auto i : t)
        {
            m[i-'a']--;
        }
        for(int i = 0 ; i < 26 ; i++)
        {
            if(m[i] != 0) return false;
        }
        return true;
        
    }
};
