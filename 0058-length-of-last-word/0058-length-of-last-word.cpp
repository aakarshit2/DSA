class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
            for(int i= s.length()-1;i>=0;){
                if(s[i]==' '){
                    if(i==s.length()-1){
                       i--;
                        s.pop_back();
                    }
                    else{
                        break;
                    }
                }
                else{
                    
                    count++;
                    i--;
                }
            }
        return count;
    }
};