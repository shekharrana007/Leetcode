class Solution {
public:
    int maxProduct(vector<int>& nums) {
//         int n= nums.size();
//         int m=INT_MIN;
//         int mu=1;
    
// for (int i = 0; i < n; i++) {
//     mu *= nums[i];
//     m = max(m, mu);
//     if (mu == 0) mu = 1;
// }

// mu = 1;
// for (int i = n - 1; i >= 0; i--) {
//     mu *= nums[i];
//     m = max(m, mu);
//     if (mu == 0) mu = 1;
// }

        
//         return m;



//better approach
int  n=nums.size();
int ans=INT_MIN;
int p=1;
int s=1;
for(int  i=0;i<n;i++){
    if(p==0)p=1;
    if(s==0)s=1;
    p*=nums[i];
    s*=nums[n-i-1];
    ans=max(ans,max(p,s));
}
return ans;
   }
};