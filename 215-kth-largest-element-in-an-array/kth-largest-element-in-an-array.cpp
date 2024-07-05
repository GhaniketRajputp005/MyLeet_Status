class Solution {
public:

    int partition(vector<int>& nums, int L, int R){
        
        int pivot = nums[L];
        int i = L + 1;// if only one element is present,then j's index will be -1 finally,so to avoid that
        // situation we make i > j for single element ,and loop condn fails for this.
        int j = R;
        

        while(i <= j){

            if(nums[i] < pivot && nums[j] > pivot){
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
            if(nums[i] >= pivot) i++;
            if(nums[j] <= pivot) j--;
        }
        swap(nums[j], nums[L]);
        return j;
    }

    int findKthLargest(vector<int>& nums, int k) {

        int L = 0,j;
        int R = nums.size() - 1;


        do{
            j = partition(nums, L, R);

            if(k == j + 1){
                return nums[j];
            }
            else if(j + 1 < k){
                L = j + 1;
            }
            else{
                R = j - 1;
            }
        }while( k != j + 1);

        return 0;

         
        // =========== min_heap=============//

        // priority_queue<int,vector<int>,greater<int>>pq;

        // for(int i = 0; i < nums.size();i++){
        //     pq.push(nums[i]);

        //     if(pq.size() > k){
        //         pq.pop();
        //     }

        // }
        // return pq.top();

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