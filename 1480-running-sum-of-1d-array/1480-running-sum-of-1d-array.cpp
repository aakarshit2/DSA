class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int l=0;
        int r=1;
        while(r!= nums.size()|| l!= nums.size()-1){
            nums[r]= nums[l]+nums[r];
            l=l+1;
            r=r+1;
        }
        return nums;
    }
};