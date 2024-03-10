class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       
        vector<int> v;
        unordered_map<int, int> umap;
        for (auto i : nums1) {

            umap[i]++;
        }

        for (auto i : nums2) {

            if (umap.find(i) != umap.end()) {
                 v.push_back(i);
                 umap.erase(i);
            }
        }

        
        return v;


        // vector<int> v;
        // unordered_map<int, int> umap;
        // for (auto i : nums1) {

        //     umap[i]++;
        // }

        // for (auto i : nums2) {

        //     if (umap.find(i) != umap.end()) {
        //         umap[i] = -1;
        //     }
        // }

        // for (auto i : umap) {
        //     if (i.second == -1) {
        //         v.push_back(i.first);
        //     }
        // }
        // return v;
    }
};