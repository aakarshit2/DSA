class Solution {
public:
    int titleToNumber(string s) {
        int ans;
        int j=1;
        ans=(s[s.length()-1]-'A'+1);
        for(int i=s.length()-2;i>=0;i--){
            ans=ans+(pow(26,j)*(s[i]-'A'+1));
            j++;
        }
    return ans;
    }
};