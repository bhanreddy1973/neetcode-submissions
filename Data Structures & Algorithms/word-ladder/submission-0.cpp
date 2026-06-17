class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string,int>> q;
        unordered_set<string> sen(wordList.begin(),wordList.end());
        if(!sen.count(endWord)) return 0;

        q.push({beginWord,1});
    
    while(!q.empty())
    {
        auto[s,t] = q.front();
        q.pop();
        if(s == endWord) return t;
        for(int i = 0 ; i < s.size(); i++)
        {
            char o = s[i];
            for(char ch ='a' ; ch <= 'z';ch++)
            {
                s[i] = ch;
                if(sen.count(s)) 
                {
                    q.push({s,t+1});
                    sen.erase(s);
                }

            }
            s[i] = o;
        }


    }

    return 0;

    }
};
