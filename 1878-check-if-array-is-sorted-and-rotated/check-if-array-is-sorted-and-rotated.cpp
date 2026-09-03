class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        
        //not rotated
        if(nums[0]<nums[n-1]){
            for(int i=0;i<n-1;i++){
                if(nums[i]>nums[i+1]) return false;
            }
        }
        //rotated
        else{
            int count =0;
            for(int i=0;i<n-1;i++){
                if(nums[i] > nums[i+1]) count++;
            }
            if(count > 1) return 0;
        }

        return 1;
    }

};