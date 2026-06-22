class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int diff=target-nums[i];
            if(mp.find(diff)!=mp.end()){
                ans[0]=mp[diff];
                ans[1]=i;
            }
            mp[nums[i]]=i;
        }
        return ans;
        }
    
};