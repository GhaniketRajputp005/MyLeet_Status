class Solution {
public:
    // ============== recursive approach =============
    // double fun(double x, long n) {
    //     if (n == 0)
    //         return 1.0;
    //     if (n % 2 == 0)
    //         return fun(x * x, n / 2);

    //     return x * fun(x * x, n / 2);  // actual calculation is occuring here
    // }

    // double myPow(double x, int n) {

    //     if (n == 0 || x == 1)
    //         return 1;

    //     int flag = 0;
    //     long  p = n;
    //     if (n < 0) {
    //         p = -1 * (long)n;
    //         flag = 1;
    //     }

    //     double res = fun(x, p);

    //     if (flag == 1) {
    //         res = 1 / res;
    //     }

    //     return res;
    // }

    // =========== iterative =============
    double myPow(double x, int n) {
        long num = n;
        double ans = 1;
        if (num < 0) {
            num = -1 * num;
        }

        while (num) {

            if (num % 2 == 0) {
                x = x * x;
                num = num / 2;
            } else {
                ans = ans * x;
                num = num - 1;
            }
        }
        if (n < 0) {
            ans = 1.0 / ans;
        }

        return ans;
    }
};