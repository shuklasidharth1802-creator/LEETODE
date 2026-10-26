class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        stack<char>st;
        for(int i=0; i<n; i++){
             char current  = num[i];
            while(k>0 && !st.empty() && st.top()> current){
                st.pop();
                k--;
            }
            st.push(current);

            }
            
            while(k>0 && !st.empty()){
                st.pop();
                k--;
            
        }
        string ans="";
       

while(!st.empty()){
    ans += st.top();
    st.pop();
}
    reverse(ans.begin(), ans.end()); 

        while(!ans.empty() && ans[0] == '0'){
    ans.erase(0, 1);
}

if(ans.empty()){
    return "0";
}
return ans;

        
    }
};