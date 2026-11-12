class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxLen = 1;
        int n = nums.size();
        int len = 1;
        for(int i=1;i<n;i++){
            if(nums[i] > nums[i-1]){
                len++;
                maxLen = max(len,maxLen);
            }
            else{
                len = 1;
            }
        }
        len = 1;
        for(int i=1;i<n;i++){
            if(nums[i] < nums[i-1]){
                len++;
                maxLen = max(maxLen,len);
            }
            else len = 1;
        }
        
        return maxLen;
    }
};