class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        vector<int>v(101,0);
        for(auto i: nums){
              v[i]++;
            if(v[i]>2){
              
                return false;
            }
        }
        return true;
    }
};