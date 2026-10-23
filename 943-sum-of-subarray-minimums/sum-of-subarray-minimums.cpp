class Solution {
public:
vector<int>NSL(vector<int> & arr,int n){
    vector<int>result(n);
    stack<int>st;
    for(int i=0; i<n; i++){
        if(st.empty()){
            result[i]=-1;

        }
        else{
            while(!st.empty() && arr[st.top()] >=arr[i])
                st.pop();
                result[i]=st.empty() ? -1 : st.top();
            
           
        }
         st.push(i);
    }
    return result;
}

vector<int>NSR(vector<int> & arr,int n){
    vector<int>result(n);
    stack<int>st;
    for(int i=n-1; i>=0; i--){
        if(st.empty()){
            result[i]=n;

        }
        else{
            while(!st.empty() && arr[st.top()] >arr[i])
                st.pop();
                result[i]=st.empty() ? n : st.top();
            
           
        }
         st.push(i);
    }
    return result;
}


    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int>nsl = NSL(arr,n);
        vector<int>nsr = NSR(arr,n);

        long long sum=0;

      int m=1e9+7;

        for(int i=0; i<n; i++){

           long long LS=i-nsl[i];
            long long RS=nsr[i]-i;

            long long totalWays=LS*RS;

            long long totalSum=arr[i]*totalWays;
            sum=(sum+totalSum)%m;


            
        }
        return sum;
        
    }
};