class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int top=0;
        int left=0;
        int bot=n-1;
        int right=m-1;
        vector<int>ans;
        while(top<=bot && left<=right){
            for(int j=left;j<=right;j++){
                ans.push_back(matrix[top][j]);
            }
            top++;
            for(int i=top;i<=bot;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bot){
            for(int j=right;j>=left;j--){
                ans.push_back(matrix[bot][j]);
            }
            bot--;
            }
            if(left<=right){
            for(int i=bot;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
            }
        }
        return ans;
    }
};