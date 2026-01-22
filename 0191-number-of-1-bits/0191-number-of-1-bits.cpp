class Solution {
public:
    int hammingWeight(int n) {
        //  return __builtin_popcount(n);
        int ans;
     while(n>0){
        if(n%2==0){
            ans+=0;

        }
        else{
            ans+= 1;
        }
        n=n/2;
     }  
     return ans; 
    }
};