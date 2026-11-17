class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        
        int last_indx = n-1;

        for(int indx = n-2; indx >= 0; indx--){
            if(indx + nums[indx] >= last_indx){
                last_indx = indx;
            }
        }

        return last_indx == 0;
    }
};