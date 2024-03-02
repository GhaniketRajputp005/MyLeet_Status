class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        
        int max;
        abs(nums[0]) > abs(nums[nums.size()-1]) ? max = abs(nums[0])+1 : max = abs(nums[nums.size()-1])+1;

        vector<int>v(max,0),ans;

        for(int i = 0; i< nums.size(); i++){
            v[abs(nums[i])]++;
          
        }
        for(int i = 0; i<max; i++){
            if(v[i] >= 1) while(v[i]--)  ans.push_back(i*i);
        }
       return ans;
    }
};