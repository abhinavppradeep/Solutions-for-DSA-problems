class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        map<pair<int,int>, int> mpp;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==j || i+j==m-1){
                    mpp[{i, j}]=mat[i][j];
                }
            }
        }
        int sum=0;
        for(auto ent:mpp){
            sum=sum+ent.second;
        }
        return sum;
    }
};