class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int A1=(ax2-ax1)*(ay2-ay1);
        int A2=(bx2-bx1)*(by2-by1);

        int overlap=0;
        if(ax1<bx2 && ax2>bx1 && ay1<by2 && ay2>by1){
            int commonwidth=min(ax2,bx2)-max(ax1,bx1);
            int commonlength=min(ay2,by2)-max(ay1,by1);

            overlap=commonwidth*commonlength;
        }

        return A1+A2-overlap;
    }
};