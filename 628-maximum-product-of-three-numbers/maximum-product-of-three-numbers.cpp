class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        
        vector<int>v(nums);
        int arr_size = nums.size(), i = 4, result = INT_MIN ;
        sort(v.begin(), v.end());


      result  = max(result, v[0]*v[1]*v[2]);
      result  = max(result, v[0]*v[1]*v[arr_size -1]);
      result  = max(result, v[0]*v[arr_size -2]*v[arr_size -1]);
      result  = max(result, v[arr_size -3]*v[arr_size -2]*v[arr_size -1]);
      return result;
    }
};