class Solution {
public:
    int mySqrt(int x) {
        int left=0;
        int right=x;
        long mid=0;
        int ans=0;
        while(left<=right){
            mid=left+(right-left)/2;
            long sq= mid*mid;
            if(sq>x){
                right=mid-1;
            }
            else if(sq<x){
                ans=mid;
                left=mid+1;
            }
            else{
                return mid;
            }
            
        }
        return ans;

    }
};