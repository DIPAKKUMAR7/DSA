class Solution {
public:
    bool canAliceWin(int n) {
        if(n < 10) return false;
        int temp = 10;
        while(1){
            n-=temp;
            temp--;
            if(n < temp) {
                break;
            }
        }
        if(temp % 2 == 0) return false;
        return true;
    }
};