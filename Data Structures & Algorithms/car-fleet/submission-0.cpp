class Solution {
public:
    int carFleet(int t, vector<int>& p, vector<int>& s) {
        int n = p.size();
        if(n == 0) return 0;
        if(n == 1) return 1;
        map<int,double> m;
        for(int i =0 ;i < n ;i++) m[-p[i]] = (double)(t-p[i])/s[i];
        int res = 0; double cur =0;
        for(auto i : m) if(i.second > cur) cur = i.second , res++;
        return res;


    }
};