class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int p=0;
        int s=0;
        int n=mat.size();

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){
                    p+=mat[i][j];
                }
               else  if((i+j)==(n-1)){
                    s+=mat[i][j];
                }
            }
        }
        int ans=p+s;
        return ans;
    }
};