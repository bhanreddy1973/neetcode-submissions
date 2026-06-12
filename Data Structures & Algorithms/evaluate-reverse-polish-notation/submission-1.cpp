class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int ans = 0 ;
        for(auto i : tokens)
        {
            if(i == "+" || i =="-" || i =="*" || i =="/")
            {
                if(s.size() <2) return -1;

                int b = s.top();
                s.pop();
                int a = s.top();
                s.pop();
                if( i == "+") s.push(a + b);
                else if(i == "-") s.push(a-b);
                else if(i == "*") s.push(a*b);
                else
                {
                    if( b != 0) s.push(a/b);
                    else return -1;
                }

            }
            else
            {
                s.push(stoi(i));
            }
        }
        return s.top();
    }
};
