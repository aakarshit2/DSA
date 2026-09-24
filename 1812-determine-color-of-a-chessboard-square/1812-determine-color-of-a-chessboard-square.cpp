class Solution {
public:
    bool squareIsWhite(string co) {
       int x= co[0]-'a';
       int y= co[1]-'0';

       if((x+y)%2==0){
        return true;
       }
       return false;
    }
};