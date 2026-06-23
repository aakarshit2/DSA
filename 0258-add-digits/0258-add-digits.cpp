class Solution {
public:
    int getsum(int n){
        int sum=0;
        int digit=0;
        while(n>0){
            digit=n%10;
            sum=sum+digit;
            n/=10;
        }
        return sum;
    }
    int addDigits(int n) {
        while(n>=10){
            n=getsum(n);
        }
    return n;
    }
};