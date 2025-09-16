class Solution {
public:
    int maxProfit(vector<int>& prices) {
    //     int n=prices.size();
    //     int mini=prices[0];
    //     int pro=0;
    //     for(int i=0;i<n;i++){
    //        int cost=prices[i]-mini;
    //        pro=max(pro,cost);
    //        mini=min(mini,prices[i]);
    // }
    // return pro;
   
int n=prices.size();
int maxi=0;
int mini=INT_MAX;
for(int i=0;i<n;i++){
    mini=min(mini,prices[i]);
    maxi=max(maxi,prices[i]-mini);
}
return maxi;





    // int n=prices.size();
    // int mini=INT_MAX;
    // int maxi=0;
    // int x=-1;
    
    // for(int i=0;i<n;i++){
    //     if(prices[i]<mini){
    //         mini=prices[i];
    //         x=i;
    //     }
    // }
    
    // for(int i=x;i<n;i++){
    //     maxi=max(maxi,prices[i]);
    // }
    // return (maxi-mini >0) ? maxi-mini : 0;
   
 
    }


};