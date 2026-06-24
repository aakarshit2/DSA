class Solution {
public:
    bool isPalindrome(string s) {
        string ss="";
        for(char ch :s){
            if(isalnum(ch)){
                ss.push_back(tolower(ch));
            }
        }
        int left =0;
        int right = ss.length()-1;
        while(left<right){
            if(ss[left]!=ss[right]){
                return 0;
            }
            left++;
            right--;
        }
        return 1;
    }
    
};