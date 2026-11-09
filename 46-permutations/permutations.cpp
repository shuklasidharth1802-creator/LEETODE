class Solution {
public:
void  fun(vector<int>&a,int n , int idx, vector<int>&diary,vector<int>&used,vector<vector<int>>&ans){
    
    if(diary.size()==n){
        ans.push_back(diary);
        return;
    }
    for(int i=0;i<n; i++){
        if(used[i]==false){
        used[i] = true;
        diary.push_back(a[i]);
        fun(a,n,idx+1,diary,used,ans);
        diary.pop_back();
        used[i]=false;
    }
    }
    return;
}
    vector<vector<int>> permute(vector<int>& nums) {
            int n=nums.size();
            vector<int>diary;
            vector<vector<int>>ans;
            int idx=0;
           vector<int> used(n, false);

        fun(nums,n,idx,diary,used,ans);
        return ans;
    }
};