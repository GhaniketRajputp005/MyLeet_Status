class Solution {
public:
    bool judgeSquareSum(int c) {

       long int i = 0, j = c;
        if(c == 0) return 1;
        // while (i <= j) {
        //     long int mid = (i+j) / 2;
        //     cout<<mid<<endl;
        //     if(mid * mid == c) return true;
        //     else if (mid * mid < c) {
        //         break;
        //     } else if (mid * mid > c) {
        //         j = mid - 1;
        //     }
        // }

        j = sqrt(c);

        while (i <= j) {
            if (i * i + j * j == c) {
                return true;
            } else if (i * i + j * j < c) {
                i++;
            } else
                j--;
        }

        return false;
    }
};