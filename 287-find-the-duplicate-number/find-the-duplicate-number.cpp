class Solution {
public:
    int findDuplicate(vector<int>& nums) {


  /// tortoise hare approach
    int slow = nums[0];
    int fast = nums[0];

    ;

    do{
         slow = nums[slow];
    fast = nums[nums[fast]];

    }while( slow != fast);
    
    slow = nums[0];
    while(slow != fast){
        
        slow = nums[slow];
        fast = nums[fast];
        
    }
    
    return fast;



//// approach is good but, we can't modify array so..

    //     int dup = 0;
    //     for(int i = 0; i < nums.size(); i++){

    //         if(nums[abs(nums[i]) - 1] < 0){
    //             dup = abs(nums[i]);
    //             return dup;
    //         }
    //         else{
    //             nums[abs(nums[i]) - 1] *= -1;
    //         }
    //     }
    //   return -1;
    }
};