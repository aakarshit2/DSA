class Solution {
public:
int d(vector<int> &a,vector<int>& b){
    int dx= a[0] - b[0];
    int dy = a[1] -b[1];
    return dx*dx + dy*dy;
}
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<int> de={
            d(p1,p2),d(p1,p3),d(p1,p4),d(p2,p3),d(p2,p4),d(p3,p4)
        };
        sort(de.begin(),de.end());
        return de[0]>0 && de[0]==de[1] && de[1]==de[2] && de[2]==de[3] && de[4]==de[5];

    }
};