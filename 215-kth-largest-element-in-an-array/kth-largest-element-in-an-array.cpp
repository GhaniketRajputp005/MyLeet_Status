class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
         
        // =========== min_heap=============//

        priority_queue<int,vector<int>,greater<int>>pq;

        for(int i = 0; i < nums.size();i++){
            pq.push(nums[i]);

            if(pq.size() > k){
                pq.pop();
            }

        }
        return pq.top();

         // ==========  max heap ===========/
        //  priority_queue<int>pq;

        //  for(int i = 0 ; i < nums.size(); i++){
        //     pq.push(nums[i]);

        //  }

        //  int ctr = 0;
        

        //  while(!pq.empty() ){

        //    ctr++;
        //     if(ctr == k){
        //         return pq.top();
        //     }
        //     pq.pop();
        //  }

        //  return k;

        //========== nth element =============//

        // nth_element(nums.begin(), nums.begin() + nums.size() - k, nums.end());
        // return nums[nums.size() - k];
    }
};