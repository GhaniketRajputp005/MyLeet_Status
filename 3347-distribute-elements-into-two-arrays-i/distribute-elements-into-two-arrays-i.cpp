class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>a;
        vector<int>b;
        a.push_back(nums[0]);
        b.push_back(nums[1]);
        int k = 0,j = 0;
        
        for(int i = 2; i < nums.size(); i++){
            if(a[k] >b[j]){
                
                a.push_back(nums[i]);
                k++;
                                }
            else{
                b.push_back(nums[i]);
                j++;
}
        }
        a.insert(a.end(),b.begin(),b.end());
        return a;
    }
};