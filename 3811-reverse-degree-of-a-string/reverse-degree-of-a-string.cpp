class Solution {
public:
    int reverseDegree(string s) {
        
        int ans = 0;
        int pos = 1;
        for(char & ch:s){
            ans += (27-(ch - 'a' + 1))*pos;
            pos++;
        }
        return ans;
        
    }
};