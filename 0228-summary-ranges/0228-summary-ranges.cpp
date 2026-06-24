class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int j=0;
        if(nums.empty()){
            return ans;
        }
        for(int i=0;i<nums.size();i++){
            
            if(i==nums.size()-1 || (nums[i]+1)!=nums[i+1]){
                if(j==i){
                    ans.push_back(to_string(nums[i]));
                }
                else{
                    ans.push_back(to_string(nums[j])+"->"+to_string(nums[i]));
                }
                j=i+1;
            }
            else
            continue;
        }
        return ans;
    }
};