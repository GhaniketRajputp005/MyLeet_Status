class Solution {
public:
    int passThePillow(int n, int time) {

       int  rem_time = time - n;

        if(rem_time < 0) return time + 1;

        n--;
        int complete_turns = rem_time / n;
        int rem_person = rem_time % n;
        int answer = 0;

        if(complete_turns % 2 != 0){
            answer = 1 + rem_person + 1;
        }
        else{
            answer = ++n - rem_person - 1;
        }
        return answer;
        
    }
};