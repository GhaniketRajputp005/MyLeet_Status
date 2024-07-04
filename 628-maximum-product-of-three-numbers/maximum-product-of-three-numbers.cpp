class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        // ======= OPTIMIZED APPROACH O(N) ========//
        // =======   finding nth element ==========//
        // no need of partial sorting as we just need elements that may be out of order

        // for size 2 from start
        int n = nums.size();
        nth_element(nums.begin(), nums.begin() + 1, nums.end());

        // for size 3 at ending of array

        nth_element(nums.begin() + 2, nums.begin() + nums.size() - 3, nums.end());

        int result = 0;

        result = max(nums[0] * nums[1] * (*max_element(nums.begin() + 2,nums.end())),
                     nums[n -3] * nums[n - 2] * nums[n - 1]);

        return result;




     
     
   // O(NlogN)
    //     vector<int>v(nums);
    //     int arr_size = nums.size(), i = 4, result = INT_MIN ;
    //     sort(v.begin(), v.end());


    //   result  = max(result, v[0]*v[1]*v[2]);
    //   result  = max(result, v[0]*v[1]*v[arr_size -1]);
    //   result  = max(result, v[0]*v[arr_size -2]*v[arr_size -1]);
    //   result  = max(result, v[arr_size -3]*v[arr_size -2]*v[arr_size -1]);
    //   return result;
    }
};