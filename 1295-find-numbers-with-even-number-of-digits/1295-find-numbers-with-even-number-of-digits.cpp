class Solution {
public:
    bool count(int num){
        num=abs(num);
        int dig=0;
        if(num==0){
            return false;
        }
        while(num>0){
            num=num/10;
            dig++;
        }
        return dig%2==0;
    }
    int findNumbers(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++){
            if(count(nums[i])){
                 res++;
            }

        }
        return res;
    }
};