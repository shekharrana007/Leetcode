class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int,int>m;
        // for(int s:nums){
        //     m[s]++;
        // }int n=nums.size()/2;
        // int ans;
        // for(auto const&[e,c]:m){
        // if(c>n){
        //     return e;
        // }
        // }
        // return -1;
        int can=0;
        int cnt=0;
        for(int n:nums){
            if(cnt==0){
                can=n;
            }
            cnt+=(n==can)?1:-1;
        }
        return can;
    }
};