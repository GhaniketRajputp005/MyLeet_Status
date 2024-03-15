class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int s = nums.size();
        vector<int> left_prod(s, 1);
        vector<int> right_prod(s, 1);
        vector<int> ans(nums);

        for (int i = 1; i < s; i++) {

            left_prod[i] = left_prod[i - 1] * nums[i - 1];
        }
        for (int i = 0; i < s; i++) {

            cout << left_prod[i] << " ";
        }
        cout << "\n";

        for (int i = s - 2; i >= 0; i--) {

            right_prod[i] = right_prod[i + 1] * nums[i + 1];
        }
        for (int i = 0; i < s; i++) {

            cout << right_prod[i] << " ";
        }
        for (int i = 0; i < s; i++) {
            ans[i] = left_prod[i] * right_prod[i];
        }

        return ans;
    }
};