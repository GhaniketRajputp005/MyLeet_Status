class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        // ONE PASS SOLN
        vector<int>v(101,0);
        int sum = 0, freq = 0;
        for(auto i : nums){
            v[i]++;
            if(v[i] > freq ){
                sum = v[i];
                freq = v[i];
            }

            else if(v[i] == freq){
                sum += v[i];
            }
        }
        return sum;



        ///   TWO PASS SOLN  ////
        // unordered_map<int,int>umap;
        // int maxfreq = INT_MIN;
        // for(auto i: nums){
        //     umap[i]++;
        //     if(umap[i] > maxfreq){
        //         maxfreq = umap[i];
        //     }
        // }

        // int sum = 0;

        // for(auto i: umap){
        //     if(i.second == maxfreq){
        //         sum+= maxfreq;
        //     }
        // }
        // return sum;
    }
};