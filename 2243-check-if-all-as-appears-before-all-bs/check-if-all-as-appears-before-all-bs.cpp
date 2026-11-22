class Solution {
public:
    bool checkString(string s) {
        int lastA = -1;
        int firstB = -1;
        bool flag = 1;

        for(int i=0;i<s.size();i++){
            if(s[i]== 'a') lastA = i;
            if(s[i] == 'b' && flag){
                firstB = i;
                flag = 0;
            }
        }
        if(lastA == -1 || firstB == -1) return 1;
        return lastA < firstB;
    }
};