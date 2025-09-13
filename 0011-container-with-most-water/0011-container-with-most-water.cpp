class Solution {
public:
    int maxArea(vector<int>& height) {
       int n= height.size();
       int s=0;
       int e=n-1;
       int maxw=0;
       while(s<e){
        int h=min(height[s],height[e]);
        int w=e-s;
        int area=h*w;
        maxw=max(maxw,area);
        if(height[s]<height[e]){
            s++;
        }
        else{
            e--;
        }
       }
       return maxw;
    }
};