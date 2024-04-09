class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        vector<int>v(tickets);
        int ctr = 0;

        for(int i = 0; i <= k; i++){
            if(v[i] != 0){
            ctr += 1;
            v[i] -= 1;
            }

        }
        while( v[k] != 0 ){

            for(int i = 0; i < v.size(); i++){
                if(v[i] != 0){
                    v[i] -= 1;
                    ctr++;
                }
            }
        }

        return ctr;
    }
};