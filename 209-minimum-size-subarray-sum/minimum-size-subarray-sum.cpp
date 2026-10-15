class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int ans = INT_MAX;
        int sum=0;
        int low =0;
        for(int high=0; high<n; high++){
            sum+=nums[high];

            while(sum>=target){
                int len = high-low+1;

                ans = min(ans,len);
                sum-=nums[low];
                low++;
            }

        }
            if(ans==INT_MAX){
                return 0;
            
        }
        return ans;

        
    }
};