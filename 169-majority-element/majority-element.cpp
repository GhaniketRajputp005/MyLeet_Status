class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int ctr = 0;
        int val = -1;

        for(auto i: nums){
            if(ctr == 0){
                val = i;
                ctr++;
            }
            else if(i == val){
                ctr++;
            }
            else{
                ctr--;
               
            }
        }

        return val;
    }
};