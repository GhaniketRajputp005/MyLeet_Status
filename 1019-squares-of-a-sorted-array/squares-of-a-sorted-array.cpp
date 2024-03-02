class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n = nums.size();
        int left = 0, right = n - 1;
        vector<int>v(n);
        for(int i = n -1; i >= 0; i--){
            if(abs(nums[left]) > abs(nums[right])){
                v[i] = abs(nums[left])*abs(nums[left]);
                left++;
     
            }
            else{
                 v[i] = abs(nums[right])*abs(nums[right]);
                right--;
            }
        }
        return v;
        
    //     int max;
    //     abs(nums[0]) > abs(nums[nums.size()-1]) ? max = abs(nums[0])+1 : max = abs(nums[nums.size()-1])+1;

    //     vector<int>v(max,0),ans;

    //     for(int i = 0; i< nums.size(); i++){
    //         v[abs(nums[i])]++;
          
    //     }
    //     for(int i = 0; i<max; i++){
    //         if(v[i] >= 1) while(v[i]--)  ans.push_back(i*i);
    //     }
    //    return ans;
    }
};