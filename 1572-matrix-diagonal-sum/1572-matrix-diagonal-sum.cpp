class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int p=0;
        int s=0;
        int n=mat.size();

        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         if(i==j){
        //             p+=mat[i][j];
        //         }
        //        else  if((i+j)==(n-1)){
        //             s+=mat[i][j];
        //         }
        //     }
        // }
        int mid=n/2;
        for(int i=0;i<n;i++){
            
            p+=mat[i][i];
            s+=mat[i][n-i-1];
            
        }
        if(n%2==1){
               s= s-mat[mid][mid];
            }
        int ans=p+s;
        return ans;
    }
};