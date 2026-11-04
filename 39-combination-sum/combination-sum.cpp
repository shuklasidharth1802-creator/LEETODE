class Solution {
public:
void fun(vector<int>&a,int n,int idx,vector<int>&diary,int sum,int target,vector<vector<int>>&res){
    if(idx==n){
        if(sum==target)
        res.push_back(diary);
        return;
    }
    fun(a,n,idx+1,diary,sum,target,res);
    if(a[idx]+sum<=target){
        diary.push_back(a[idx]);
        sum=sum+a[idx];
        fun(a,n,idx,diary,sum,target,res);
        diary.pop_back();
        sum=sum-a[idx];
            }
            return;
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        int sum=0;
        int idx=0;
        vector<int>diary;
        vector<vector<int>> res;
        fun(candidates,n,idx,diary,sum,target,res);
        return res;
        
    }
};