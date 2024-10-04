class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {

        int sum = 0;
        for(auto i: arr){
            sum += i;
        }

        if(sum%3!=0)return false;

        int n= arr.size();
        int sum1 = 0;
        int ctr= 0;
        for(auto i: arr){
            sum1+=i;
            
            if(sum1 == sum/3 ){
                ctr++;
                sum1 = 0;
            }
            
        }

        if(ctr >=3) return true;
        return false;
        
    }
};