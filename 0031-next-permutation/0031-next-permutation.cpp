class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        int idx = -1;
        for(int i = n - 2; i >= 0; i--){
            if(nums[i] < nums[i + 1]){
                idx = i;
                break;
            }
        }

        int idx2 = -1;
        if(idx != -1){
            for(int i = n - 1; i >= 0; i--){
                if(nums[i] > nums[idx]){
                    idx2 = i;
                    break;

                }
            }

            swap(nums[idx], nums[idx2]);
        }
        
        reverse(nums, idx + 1, n - 1);
    }

    void reverse(vector<int>& nums, int l, int r){
        while(l < r){
            swap(nums[l], nums[r]);
            l++;
            r--;
        }
    }
};