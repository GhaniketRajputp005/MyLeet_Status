class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        unordered_map<int,int>umap;
        int maxfreq = INT_MIN;
        for(auto i: nums){
            umap[i]++;
            if(umap[i] > maxfreq){
                maxfreq = umap[i];
            }
        }

        int sum = 0;

        for(auto i: umap){
            if(i.second == maxfreq){
                sum+= maxfreq;
            }
        }
        return sum;
    }
};