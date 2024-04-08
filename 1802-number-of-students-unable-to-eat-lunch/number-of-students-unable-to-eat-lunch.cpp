class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        int ctr_1 = 0, ctr_0 = 0, p = 0;

        for(auto i: students){
            if(i == 1) ctr_1 += 1;
            else ctr_0 += 1;

        }

        for( auto i : sandwiches){
            if(i == 1 && ctr_1 != 0){
                ctr_1--;
            }
            else if(i == 0 && ctr_0 != 0){
                ctr_0--;
            }
            else{
                break;
            }
        
        }

        if(ctr_1 !=0 || ctr_0 != 0){
            return ctr_1 + ctr_0;
        }

        return 0;
        
    }
};