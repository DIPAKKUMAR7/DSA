class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> maxLeft(n);
        vector<int> minRight(n);
        int maxVal = INT_MIN;
        int minVal = INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i] > maxVal){
                maxVal = nums[i];
            }
            maxLeft[i] = maxVal;
            if(nums[n-i-1] < minVal){
                minVal = nums[n-i-1];
            }
            minRight[n-i-1] = minVal;
        }

        for(int i=0;i<n;i++){
            if(maxLeft[i]-minRight[i] <= k) return i;
        }

        return -1;
    }
};