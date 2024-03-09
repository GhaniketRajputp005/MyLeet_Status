class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int rows = matrix.size()-1;
        int cols = matrix[0].size()-1;


// o(n + m)
        int i = 0;
        while( i <= rows && cols >= 0){
            if(matrix[i][cols] == target) return true;
            else if(matrix[i][cols]< target){
                i++;
            }
            else{
                cols--;
            }
        }
        return false;
    }



        //   o(nlogn)
    //     int rows = matrix.size();
    //     int cols = matrix[0].size();

    //     if (matrix[rows - 1][cols - 1] < target)
    //         return false;

    //     for (int i = 0; i < rows; i++) {

           
    //             int left = 0, right = cols - 1;
    //             while (left <= right) {
    //                 int mid = (left + right) / 2;
    //                 if (target == matrix[i][mid])
    //                     return true;
    //                 else if (target < matrix[i][mid])
    //                     right = mid - 1;
    //                 else {
    //                     left = mid + 1;
    //                 }
    //             }
            
    //     }
    //     return false;
    // }
};