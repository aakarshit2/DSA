class Solution {
public:
    int countEven(int n) {
    int count=0;
    for(int j=0;j<=n;j++){
        int sum=0;
        int i=j;
        while(i>0){
            int digit =i%10;
            sum=sum+digit;
            i=i/10;
        }
        if(sum%2==0){
            count++;
        }
    }
        return count-1;
        }
    };