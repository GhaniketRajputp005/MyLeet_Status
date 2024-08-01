class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ctr =0 ;
        for(int i =0; i < details.size(); i++){

            int age = 0;
            age = (details[i][11] - '0') * 10 + (details[i][12] - '0');
            age > 60?ctr++: ctr;
        }
        return ctr;
        
    }
};