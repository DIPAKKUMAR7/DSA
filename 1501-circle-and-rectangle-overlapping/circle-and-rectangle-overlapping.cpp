class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int xi,yi;
        //nearest point

        if(x2 < xCenter){
            xi = x2;
        }
        else if(x1 > xCenter){
            xi = x1;
        }
        else{
            xi = xCenter;
        }

        if(y2 < yCenter){
            yi = y2;
        }
        else if(y1 > yCenter){
            yi = y1;
        }
        else{
            yi = yCenter;
        }

        int dist = sqrt((xi - xCenter)*(xi-xCenter) + (yi-yCenter)*(yi-yCenter));

        return dist<=radius;
    }
};