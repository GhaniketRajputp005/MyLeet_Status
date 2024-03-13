class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        

        vector<int>capty(capacity);

        sort(capty.begin(), capty.end(), greater<int>());

        int app_count = 0, box_sum = 0, ptr =0;
        for(auto i: apple){
            app_count += i;
            if(app_count > box_sum){
                box_sum += capty[ptr++];
            }
        }

        while(app_count > box_sum){
            box_sum += capty[ptr++];
        }

        return ptr;
    }
};