class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        int pro=1;
        int sum=0;
        while(n>0){
            int r= n%10;
            sum+=r;
            pro*=r;
            n=n/10;
        }
        return temp%(sum+pro)==0;
    }
};