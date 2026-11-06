class Solution {
public:
void fun(vector<int>&a,int n ,int k,int idx, int count,int sum,vector<int>&diary, vector<vector<int>>&ans){
    if(count==k){
        if(sum==n)
        ans.push_back(diary);
        return;
    }
    if(sum>n) return;
  
    for(int i=idx; i<a.size(); i++){
        diary.push_back(a[i]);
        sum+=a[i];
        count++;
        fun(a,n,k,i+1,count,sum,diary,ans);
        diary.pop_back();
        sum -= a[i];
        count--;
    }
    return;
}
    vector<vector<int>> combinationSum3(int k, int n) {
         vector<int> diary;
        vector<vector<int>> ans;
        vector<int> a = {1,2,3,4,5,6,7,8,9};

        int idx = 0;
        int count = 0;
        int sum = 0;

        fun(a, n, k, idx, count, sum, diary, ans);

        return ans;
        
    }
};