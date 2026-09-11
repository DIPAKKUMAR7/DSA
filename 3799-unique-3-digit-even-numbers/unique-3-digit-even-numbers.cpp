class Solution {
public:
    int totalNumbers(vector<int>& digits) {

        vector<int> m(10,0);

        for(int i:digits){
            m[i]++;
        }
        set<int> st;
        for(int i=0;i<=9;i++){
            if(m[i] == 0) continue;
            m[i]--;
            for(int j=0;j<=9;j++){
                if(m[j] == 0) continue;
                m[j]--;
                for(int k=0;k<=9;k++){
                    if(m[k] == 0) continue;
                    m[k]--;
                    int ans = 100*i + 10*j + k;
                    if(ans>=100 && ans %2 == 0){
                        st.insert(ans);
                    }
                    m[k]++;
                }
                m[j]++;
            }
            m[i]++;
        }

        return st.size();
        
    }
};