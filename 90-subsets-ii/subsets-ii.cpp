class Solution {
public:
 vector<vector<int>> result;
void solve(int idx, vector<int> nums, vector<int>&tmp){
    result.push_back(tmp);
    for(int i=idx; i<nums.size(); i++){
        if(i>idx && nums[i]==nums[i-1])
            continue;
            tmp.push_back(nums[i]);
            solve(i+1,nums,tmp);
            tmp.pop_back();
        
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        vector<int>tmp;
        sort(nums.begin(),nums.end());
        solve(0,nums,tmp);
        return result;
        
    }
};