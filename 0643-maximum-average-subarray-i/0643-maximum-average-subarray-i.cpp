class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int low=0;
        int high=k-1;
        
        double sum=0;
        for(int i=low;i<=high;i++){
            sum= sum + nums[i];
        }
        double avg;
        avg=sum/k;
        double res;
        res=avg;
        while(high<nums.size()){
            res = max(res,avg);
            low++;
            high++;
            if(high==nums.size()){
                break;
            }
            avg = avg-(double)nums[low-1]/k;
            avg = avg +(double)nums[high]/k;
        }
        return res;
    }
};