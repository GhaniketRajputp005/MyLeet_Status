class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         vector<int> v;
    int first = INT_MAX, second = INT_MAX, ctr1 = 0, ctr2 = 0;
    
    // Step 1: Find potential candidates using the Boyer-Moore Voting Algorithm
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == first) {
            ctr1++;
        } else if (nums[i] == second) {
            ctr2++;
        } else if (ctr1 == 0) {
            first = nums[i];
            ctr1 = 1;
        } else if (ctr2 == 0) {
            second = nums[i];
            ctr2 = 1;
        } else {
            ctr1--;
            ctr2--;
        }
    }
    
    // Step 2: Validate the candidates by counting their occurrences
    ctr1 = ctr2 = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == first) {
            ctr1++;
        } else if (nums[i] == second) {
            ctr2++;
        }
    }
    
    // Step 3: Add valid candidates to the result vector
    if (ctr1 > nums.size() / 3) {
        v.push_back(first);
    }
    if (ctr2 > nums.size() / 3) {
        v.push_back(second);
    }
    
    return v;
    }
};