class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        if(n<=1) return 0;

        int idx0=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                idx0=i;
                break;
            }
        }

        bool is_inc=1;
        for(int i=0;i<n;i++){
            if(nums[(idx0+i)%n]!=i){
                is_inc =false;
                break;
            }
        }
        
        bool is_dec=1;
        for(int i=0;i<n;i++){
            if(nums[(idx0-i+n)%n]!=i){
                is_dec=0;
                break;
            }
        }
        if(!is_inc && !is_dec) return -1;

        int ans=1e9;
        if(is_inc){
            int path1=idx0;
            int path2=1+((n-idx0)%n)+1;
            ans=min({ans,path1,path2});
        }
        
        if(is_dec){
            int path3=1+((n-1-idx0+n)%n);
            int path4=1+((idx0+1)%n);
            ans=min({ans,path3,path4});
        }
        return ans;
    }
};