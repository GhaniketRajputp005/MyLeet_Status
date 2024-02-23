class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
      
      int i = 0, j = nums.size()-1,ctr = 0;
      while(i<j){
          if(nums[i] + nums[j] >= target){
              j--;
          }
          else{
              ctr += j-i;
              i++;
          }
      }
      return ctr;
      
      
        // int i = 0, j = 1, ctr = 0;



        // while (i < nums.size() - 1) {
        //     if (nums[i] + nums[j] < target) {
        //         ctr++;
        //         if (j == nums.size() - 1) {
        //             i++;
        //             j = i + 1;
        //         }

        //         else
        //             j++;
        //     } else {
        //         i++;
        //         j = i + 1;
        //     }
        // }
        // return ctr;
    }
};