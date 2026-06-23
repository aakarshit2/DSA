class Solution {
public:
    int getsum(int n){
        int sum=0;
        int digit=0;
        while(n>0){
            digit=n%10;
            sum=sum+(digit*digit);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> s;
        while(n!=1&&s.find(n)==s.end()){
            s.insert(n);
            n=getsum(n);
        }
        return n==1;
    }
};