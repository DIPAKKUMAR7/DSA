class Solution {
public:
    int longestValidParentheses(string s) {
        int open = 0;
        int close = 0;
        int n = s.size();
        int ans = 0;
        //Left to right
        for(int i=0;i<n;i++){
            if(s[i] == '(') open++;
            else close++;
            if(open == close) {
                ans = max(ans,open+close);
            }
            if(close > open) {
                open = 0;
                close = 0;
            } 
        }
        open = close = 0;
        //right to left
        for(int i=n-1;i>=0;i--){
            if(s[i] == '(') open++;
            else close++;

            if(open == close) ans = max(ans,close+open);
            if(open > close){
                open = 0;
                close = 0;
            }
        }

        return ans;
    }
};