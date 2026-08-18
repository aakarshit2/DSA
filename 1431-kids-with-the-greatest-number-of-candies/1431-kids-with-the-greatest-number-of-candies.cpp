class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extra) {
        int mx = *max_element(candies.begin(), candies.end());
        vector<bool> res;
        for(int i=0;i<candies.size();i++){
            if((extra+candies[i])>=mx){
                res.push_back(true);
            }
            else if((extra+candies[i])<mx){
                res.push_back(false);
            }
        }
        return res;
    }
};