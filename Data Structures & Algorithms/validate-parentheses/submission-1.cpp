class Solution {
public:
    bool isValid(string s) {
        stack <char> t ;
        for(auto i : s)
        {
            if(i =='(' || i == '{' || i =='[')
            {
                t.push(i);
            }
            else
            {
                     if(t.empty()) return false;
                if( i == ']' && t.top() == '[')
                {
                    t.pop();
                    
                }else if( i == '}' && t.top() == '{')
                {
                    t.pop();
                    
                }else  if( i == ')' && t.top() == '(')
                {
                    t.pop();
                    
                }else return false;       
            }
        }
        return t.empty() ? true:false;
    }
};
