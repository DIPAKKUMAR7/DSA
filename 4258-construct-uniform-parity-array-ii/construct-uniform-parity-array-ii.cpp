class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();

        bool hasOdd = 0;
        bool hasEven = 0;

        for(int &i:nums1){
            if(i %2 == 0) hasEven = 1;
            else hasOdd = 1;
        }

        if(!hasOdd || !hasEven) return 1;
        //this is because it gives you idea about whether it can become odd  or even

        int minOdd = INT_MAX;
        for(int &i:nums1){
            if( i %2 == 1){
                minOdd = min(minOdd,i);
            }
        }

        bool isAllEven = 1;
        for(int &i:nums1){
            if(i%2 == 1){
                if(minOdd>=i){
                    isAllEven = 0;
                    break;
                }
            }
        }

        if(isAllEven) return 1;

        bool isAllOdd = 1;
        for(int &i:nums1){
            if(i%2 == 0){
                if(minOdd>=i){
                    isAllOdd = 0;
                    break;
                }
            }
        }

        if(isAllOdd) return 1;


        

        return 0;
    }
};