class Solution {
public:
void fun(int n,int k, int idx, vector<int>& diary, vector<vector<int>>& ans){
    if(diary.size()==k){
        ans.push_back(diary);
            return;
    }
        for(int i=idx; i<=n; i++){
            diary.push_back(i);
            fun(n,k,i+1,diary,ans);
            diary.pop_back();
                

    }
    return;
}
    vector<vector<int>> combine(int n, int k) {
        vector<int>diary;
        vector<vector<int>>ans;
        int idx=1;
        fun(n,k ,idx,diary,ans);
        
        return ans;
    }
};