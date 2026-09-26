class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> mp;
        for(auto &it:knowledge){
            mp[it[0]] = it[1];
        }
        string ans= "";
        int idx=0;
        while(idx<s.size()){
            if(s[idx] == '('){
                string temp = "";
                idx++;
                while(s[idx] != ')'){
                    temp+=s[idx++];
                }
                if(mp.find(temp) != mp.end()){
                    ans+=mp[temp];
                }
                else{
                    ans+='?';
                }
                idx++;
            }
            else{
                ans+=s[idx++];
            }
            
            
        }
        return ans;
    }
};