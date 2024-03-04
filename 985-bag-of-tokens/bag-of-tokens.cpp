class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        int score = 0;
        sort(tokens.begin(),tokens.end());
        if(tokens.size() == 0) return score;

        if(power == 0) return tokens.size();

        // two pointer approach 
        int i = 0, j = tokens.size() - 1;
        while(i <= j){
            if(tokens[i] <= power){
                power -= tokens[i];
                i++;
                score++;
            }
            else if(tokens[i] > power && score != 0 && i != j){
                score--;
                power += tokens[j];
                j--;
            }
            else{
                break;
            }

        }
        return score;
    }
};