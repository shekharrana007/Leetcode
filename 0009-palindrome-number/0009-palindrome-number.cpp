class Solution {
public:
    bool isPalindrome(int x) {
         
        int n=x;
        long long b=0;
        int a=0;
        while(n>0){
         
          a=n%10;
            b=b*10+a;
          n=n/10;
             
        }
        return b==x;
    }
};