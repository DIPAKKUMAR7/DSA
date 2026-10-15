class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                st.clear();
                for(int k=i;k<=j;k++){
                    st.insert(nums[k]);
                }
                ans+= (st.size()*st.size());
            }
            
        }

        return ans;
    }
};