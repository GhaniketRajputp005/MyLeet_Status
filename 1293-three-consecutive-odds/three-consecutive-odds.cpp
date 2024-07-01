class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        vector<int>v(arr);
        int size = v.size() - 3;
        for(int i = 0; i <= size; i++){
            if(v[i] % 2 != 0 && v[i + 1] % 2 != 0 && v[i + 2]%2 != 0){
                return true;
            }
        }
        return false;
    }
};