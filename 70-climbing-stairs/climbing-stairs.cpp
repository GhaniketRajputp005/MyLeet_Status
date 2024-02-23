class Solution {
public:
 
    int climbStairs(int n) { 

        int a = 1, b = 2,sum = 0;
        for(int i = 3; i<=n; i++){
            sum = a+b;
            a= b;
            b = sum;
        }
        if(n==1) return 1;
        else if(n==2) return 2;
        return sum;
        // done by fibonacci
    }
};