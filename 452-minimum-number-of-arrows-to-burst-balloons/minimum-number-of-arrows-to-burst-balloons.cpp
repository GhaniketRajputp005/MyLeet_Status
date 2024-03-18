class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {

        sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b){
            return a[1] < b[1];
        });

        int arrows = 1;   // initially ek arrow le liya h
        int prevend = points[0][1];// bs ye check krenge kitne non overlapping
                                    // pairs hai

        for(int i = 1 ; i < points.size(); i++){

            // jb tk last element se chote h, tb tk to ek hi se foot jaynge
            // jb bdi value aayegi tb arrow bdhana pdega
            if(points[i][0] > prevend){
                arrows++;
                prevend = points[i][1];
            }
        }

        return arrows;
        
    }
};