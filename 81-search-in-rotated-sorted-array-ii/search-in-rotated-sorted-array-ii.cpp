class Solution {
public:
    bool search(vector<int>& arr, int k) {
        int low = 0, high = arr.size() - 1, mid;
        while (low <= high) {

            mid = low + (high - low) / 2;

            if (k == arr[mid])
                return 1;

            else if (arr[mid] == arr[low] && arr[mid] == arr[high]) {
               low++;
               high--;
            }

            else if (arr[mid] >= arr[low]) {
                if (k >= arr[low] && k < arr[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }

            else {
                if (k <= arr[high] && k > arr[mid]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }

        return 0;
    }
};