class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(char c:s){
            if(c == '(' || c == '{' || c == '[') st.push(c);
            else if(c ==')'){
                if(st.empty() || st.top() != '(') return 0;
                st.pop();
            }
            else if(c == ']'){
                if(st.empty() || st.top() != '[') return 0;
                st.pop();
            }
            else if(c == '}'){
                if(st.empty() || st.top() != '{') return 0;
                st.pop();
            }
        }
        return st.empty();
    }
};