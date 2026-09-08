class Solution {
public:
    int countCommas(int n) {
        string s = to_string(n);
        int size = s.size();
        int ans = 0;

        if(size < 4) return 0;

        else if(size >= 4){
            ans+= n - 1000 + 1;
        }
        return ans;
    }
};