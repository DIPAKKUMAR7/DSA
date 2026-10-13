class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        for(int i=0;i<n;i++){
            if(nums[i] < 0){
                nums[i] = -nums[i];
            }
        }
        sort(nums.begin(),nums.end());

        int i=0;
        int j = n-1;
        while(i<j){
            sum+=nums[j]*nums[j];
            sum-=nums[i]*nums[i];
            i++;
            j--;
        }
        if(i==j) sum+=nums[i]*nums[i];

        return sum;
    }
};