class Solution {
public:
void fun(vector<int>&a,int n,int idx,vector<int>&diary,int sum,int target,vector<vector<int>>&res){
    if(sum==target){
    res.push_back(diary);
    return;
    }
    if(sum>target) return;

    for(int i=idx; i<a.size(); i++){
        if(i>idx && a[i]==a[i-1])
        continue;
        diary.push_back(a[i]);
        sum=sum+a[i];
        fun(a,n,i+1,diary,sum,target,res);
        diary.pop_back();
        sum=sum-a[i];
    }
    return;
    

    
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        int n=candidates.size();
        vector<int>diary;
        vector<vector<int>>res;
        int idx=0;
        fun(candidates,n,idx,diary,0,target,res);
        return res;
        
    }
};