class Solution {
public:
    bool isValid(string s) {
        stack<int>st;

        for(int i=0; i<s.size(); i++){
            if(st.empty() && (s[i] == ')' || s[i] == '}' || s[i] == ']')){
                return false;
            }
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }
            if(s[i] == ')'){
                if(st.top() != '('){
                    return false;
                }
                st.pop();
            }
            if(s[i] == '}'){
                if(st.top() != '{'){
                    return false;
                }
                st.pop();
            }
            if(s[i] == ']'){
                if(st.top() != '['){
                    return false;
                }
                st.pop();
            }
            
        }

        if(!st.empty()){
            return false;
        }

        return true;
    }
};
