class Solution {
public:
    int minDifference(vector<int>& nums) {

        int size = nums.size(), mindiff = INT_MAX;
        vector<int> v(nums);

        if (size <= 4)
            return 0;
        else {
            sort(v.begin(), v.end());
            int i = 3;

            while (i >= 0) {
                mindiff = min(mindiff, v[size - 4 + i] - v[i]);
                 i--;
                 cout<<mindiff<<endl;
            }
        }

        return mindiff;
    }
};