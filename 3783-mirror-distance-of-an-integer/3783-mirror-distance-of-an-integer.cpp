class Solution {
public:
    int reverse(int n){
        int x=0;
        while(n>0){
            int digit = n%10;
            x=x*10+digit;
            n=n/10; 
        }
        return x;
    }
    int mirrorDistance(int n) {
        return abs(n-reverse(n));
    }
};