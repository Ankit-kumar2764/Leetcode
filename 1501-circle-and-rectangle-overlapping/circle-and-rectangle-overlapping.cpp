class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {

       int xc=max(x1,min(xCenter,x2));
       int yc=max(y1,min(yCenter,y2));

       int d=sqrt((xCenter-xc)*(xCenter-xc)+(yCenter-yc)*(yCenter-yc));
       if(d<=radius) return true;
       return false; 
    }
};