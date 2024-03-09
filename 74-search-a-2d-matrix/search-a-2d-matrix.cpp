class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int rows = matrix.size();
        int cols = matrix[0].size();

        if (matrix[rows - 1][cols - 1] < target)
            return false;

        int i = 0, j = rows - 1;

        while (i <= j) {

            int mid = (i + j) / 2;
            if (target == matrix[mid][cols - 1])
                return true;
            else if (target < matrix[mid][cols - 1]) {
                j = mid - 1;
            } else {
                i = mid + 1;
            }
        }

        // now index i will point to location where target should be
        // present.

        int left = 0, right = cols - 1;

        while (left <= right) {
            int mid = (left + right) / 2;
            if (target == matrix[i][mid])
                return true;
            else if (target < matrix[i][mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return false;
    }
};