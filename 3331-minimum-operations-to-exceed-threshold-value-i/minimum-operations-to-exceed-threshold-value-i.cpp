class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ctr = 0;
        for(auto i:nums){
            if(k > i) ctr++;
            
        }
        return ctr;
    }
};