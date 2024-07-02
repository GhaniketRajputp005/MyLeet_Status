class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
          vector<int> res;
        unordered_map<int, int> box;
        for (int num : nums1)
            box[num]++;
        for (int i = 0; i < nums2.size(); ++i) {
            if (box[nums2[i]] > 0) {
                res.push_back(nums2[i]);
                box[nums2[i]]--;
            } else {
                continue;
            }
        }
        return res;

        // if it is said dont use extra space
        // then sort both arrays
        // take two pointers i, j poiting to start of each array 
        // take another pointer k, that maintains the matched elemets in any of given array
        // this way no extra space is used and given array is used for providing answer.

    }
};