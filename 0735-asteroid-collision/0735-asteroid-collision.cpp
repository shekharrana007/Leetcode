class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int a:asteroids){
            bool d=false;
            while(!st.empty()&&st.top()>0 && a<0){
                if(st.top()<-a){
                    st.pop();
                }
                else if(st.top()==-a){
                    st.pop();
                    d=true;
                    break;
                }
                else{
                    d=true;
                    break;
                }
            }
            if(!d){
                st.push(a);
            }
        }
        vector<int>res(st.size());
        for(int i=st.size()-1;i>=0;--i){
            res[i]=st.top();
            st.pop();
        }
    
        return res;
    }
};