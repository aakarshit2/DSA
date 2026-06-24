class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> s;
        int i=0;
        while(i<=(nums.size()-1)){
            if(s.find(nums[i])==s.end()){
                s[nums[i]]=i;
                i++;
            }
            else{
                return true;
            }
        }
        return false;
    }
};