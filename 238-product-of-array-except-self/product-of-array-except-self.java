class Solution {
    public int[] productExceptSelf(int[] nums) {
          int s = nums.length;

        int[]ans=  new int[s];

        ans[0] = 1;

        for (int i = 1; i < s; i++) {

            ans[i] = ans[i - 1] * nums[i - 1];
        }

        int val = nums[s - 1];
        nums[s - 1] = 1;

        for (int i = s - 2; i >= 0; i--) {
            int temp = nums[i];
            nums[i] = nums[i + 1] * val;

            val = temp;
        }

        for (int i = 0; i < s; i++) {
            ans[i] = ans[i] * nums[i];
        }

        return ans;
    }
}