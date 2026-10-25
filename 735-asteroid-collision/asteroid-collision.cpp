class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        int n=asteroids.size();
        

        for(int i=0; i<n; i++){
            int current = asteroids[i];

            while(!st.empty() && current <0 && st.top() >0){

                int sum=current +st.top();
                if(sum<0){
                    st.pop();
                }
                else if(sum>0){
                    current=0;
                    break;
                }
                else{
                    // sum==0
                    st.pop();
                    current=0;
                }
            }
            if(current!=0){
                st.push(current);

            }
        }
        
        int s=st.size();
        vector<int>result(s);
        int i= s-1;
        while(!st.empty()){
            result[i]=st.top();
            st.pop();
            i--;
        }
        
    
        return result;
    }
};