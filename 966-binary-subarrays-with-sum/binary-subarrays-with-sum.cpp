class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        unordered_map<int,int>umap;

        int ctr = 0;
        int presum = 0;
        
        for(int i: nums){
             presum += i;
             
             if(presum == goal) ctr++;

             int rem = presum - goal ;

             if(umap.find(rem) != umap.end()){
                ctr += umap[rem];
             }
             umap[presum]++;
        }
        return ctr;

    }
};