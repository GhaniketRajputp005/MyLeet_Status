class Solution {
public:
    double fun(double x, long n) {
        if (n == 0)
            return 1.0;
        if (n % 2 == 0)
            return fun(x * x, n / 2);

        return x * fun(x * x, n / 2);
    }

    double myPow(double x, int n) {

        if (n == 0 || x == 1)
            return 1;

        int flag = 0;
        long  p = n;
        if (n < 0) {
            p = -1 * (long)n;
            flag = 1;
        }

        double res = fun(x, p);

        if (flag == 1) {
            res = 1 / res;
        }

        return res;
    }
};