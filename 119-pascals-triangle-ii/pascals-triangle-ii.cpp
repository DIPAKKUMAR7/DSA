class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> pasT;

        for(int i=0;i<=rowIndex;i++){
            vector<int> temp;
            for(int j=0;j<=i;j++){
                if(j == 0 || j == i) temp.push_back(1);
                else temp.push_back(pasT[i-1][j-1] + pasT[i-1][j]);
            }
            pasT.push_back(temp);
        }

        return pasT[rowIndex];


    }
};