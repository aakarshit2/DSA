class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        vector<int> result;
        std::sort(arr1.begin(), arr1.end());
        std::sort(arr2.begin(), arr2.end());
        int i=0;
        int j=0;
        int y=0;
        int x=0;
        while(i<arr1.size() && j<arr2.size()){
            if(arr1[i]==arr2[j]){
                result.push_back(arr1[i]);
                i++;
                j++;
            }
            else if(arr1[i]>arr2[j]){
                j++;
            }
            else if(arr1[i]<arr2[j]){
                i++;
            }
        }
        result.erase(std::unique(result.begin(), result.end()), result.end());
        return result;
    }
};