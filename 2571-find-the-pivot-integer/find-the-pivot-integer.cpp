class Solution {
public:
    int pivotInteger(int n) {

        int sum = 0,n1 = n;
        int natural_sum = n*(n+1)/2;

        while(natural_sum >= sum){
             sum += n1;

             if(sum == natural_sum){
                return n1;
             }

             natural_sum -= n1;
             n1--;

        }
        return -1;
        
    }
};