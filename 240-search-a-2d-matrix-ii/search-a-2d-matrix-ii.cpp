class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        //   o(nlogn)
        int rows = matrix.size();
        int cols = matrix[0].size();

        if (matrix[rows - 1][cols - 1] < target)
            return false;

        for (int i = 0; i < rows; i++) {

            if (matrix[i][0] <= target && matrix[i][cols - 1] >= target) {
                int left = 0, right = cols - 1;
                while (left <= right) {
                    int mid = (left + right) / 2;
                    if (target == matrix[i][mid])
                        return true;
                    else if (target < matrix[i][mid])
                        right = mid - 1;
                    else {
                        left = mid + 1;
                    }
                }
            }
        }
        return false;
    }
};