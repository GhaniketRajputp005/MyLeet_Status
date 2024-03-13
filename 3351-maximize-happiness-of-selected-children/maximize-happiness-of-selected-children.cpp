class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        
        long long sum = 0;
        vector<int>v(happiness);
        sort(v.begin(), v.end(), greater<int>());
        int i = 0;

        while(k-- != 0){
            int val = v[i] - i;

            if(val < 0 || val == 0){
                break;
            }

            sum += val;
            i++;
        }

        return sum;


    }
};