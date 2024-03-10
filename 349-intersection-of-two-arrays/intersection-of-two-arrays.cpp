class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        vector<int> v;
        unordered_map<int, int> umap;
        for (auto i : nums1) {

            umap[i]++;
        }

        for (auto i : nums2) {

            if (umap.find(i) != umap.end()) {
                umap[i] = -1;
            }
        }

        for (auto i : umap) {
            if (i.second == -1) {
                v.push_back(i.first);
            }
        }
        return v;
    }
};