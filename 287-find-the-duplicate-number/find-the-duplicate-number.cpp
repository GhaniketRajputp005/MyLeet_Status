class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        

        int dup = 0;
        for(int i = 0; i < nums.size(); i++){

            if(nums[abs(nums[i]) - 1] < 0){
                dup = abs(nums[i]);
                return dup;
            }
            else{
                nums[abs(nums[i]) - 1] *= -1;
            }
        }
      return -1;
    }
};