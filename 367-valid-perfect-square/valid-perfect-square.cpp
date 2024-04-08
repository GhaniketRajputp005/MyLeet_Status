class Solution {
public:
    bool isPerfectSquare(int x) {
          int l = 1, r = x, res = 0;

        while (l <= r) {

            long int mid = r - (r - l) / 2;
            if (mid * mid == x)
                return mid;
            else if (mid * mid > x) {
                r = mid - 1;
            } else {
                res = mid;
                l = mid + 1;
            }
        }

        if(res * res == x)
        return 1;
        return 0;
    }
    
};