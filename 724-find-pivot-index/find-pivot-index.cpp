class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int pivot = 0, left = 0,right = 0;

        for(int i = 0; i < nums.size(); i++){
            right += nums[i];
        }

        for(int i = 0; i< nums.size(); i++){

            right -= nums[i];

            if(left == right){
                return i;
            }

            left += nums[i];
           
        }
        return -1;
    }
};