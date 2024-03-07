class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        vector<int>v;

        unordered_map<int, int> umap;
        
        for(int i = 0; i < nums.size(); i++){
            umap[nums[i]]++ ;
        }
        
        int dup = 0, miss = 0;
        
        for(int i = 1; i <= nums.size(); i++){
            
            if(umap.find(i) == umap.end()) miss = i;
            
            if(umap[i] > 1) dup = i;
            
        }
        
        v.push_back(dup);
        v.push_back(miss);
        return v;
        











        
        // sort(nums.begin(), nums.end());
        // int flag = 0, sum = 0,i;
        // for( i  = 0; i < nums.size()-1; i++){
        //     if(nums[i] == nums [i+1] && flag == 0){
        //         v.push_back(nums[i]);
        //         flag = 1;
               
        //     }
        //     sum += nums[i];
                
        // }
        //  sum += nums[i];

        // int actualsum = nums.size()*(nums.size()+1)/2;
        // int missingval = actualsum - (sum - v[0]);
        // v.push_back(missingval);

        // return v;
        
    }
};