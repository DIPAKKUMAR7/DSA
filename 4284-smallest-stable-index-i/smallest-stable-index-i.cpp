class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int n = nums.size();
        vector<int> maxEles(n);
        vector<int> minEles(n);
        int currMax = INT_MIN;
        int currMin = INT_MAX;

        for(int i=0;i<n;i++){
            if(nums[i]>currMax){
                currMax = nums[i];
            }
            if(nums[n-i-1] < currMin){
                currMin = nums[n-i-1];
            }
            maxEles[i] = currMax;
            minEles[n-i-1] = currMin;
        }

        for(int i=0;i<n;i++){
            if(maxEles[i]-minEles[i] <= k){
                return i;
            }
        }

        return -1;
    }
};