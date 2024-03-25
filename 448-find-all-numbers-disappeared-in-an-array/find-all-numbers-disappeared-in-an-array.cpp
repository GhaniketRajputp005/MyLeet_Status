class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        vector<int> v1;
        int s = nums.size();

        for (int i = 0; i < s; i++) {
            if (nums[abs(nums[i]) - 1] < 0)
                continue;
            else
                nums[abs(nums[i]) - 1] *= -1;
        }

        for (int i = 0; i < s; i++) {
            if (nums[i] > 0) {
                v1.push_back(i + 1);
            }
        }

        return v1;
    }
};