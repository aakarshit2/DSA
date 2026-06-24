class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        if(nums[0]!=0){
            return 0;
        }
        
        for(int i=0;i<nums.size();i++){
            if(i==nums.size()-1 ||(nums[i]+1)!=nums[i+1]){
            ans=nums[i]+1;
            break;}
        }
        return ans;
    }
};