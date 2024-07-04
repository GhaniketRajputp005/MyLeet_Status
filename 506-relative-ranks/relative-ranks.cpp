class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        vector<string>answer;
        unordered_map<int,string>u_map;
        

        vector<int>v(score);
        int n = score.size(), i = n;

        if(n == 1){
            return {"Gold Medal"};
        }
        else if(n == 2){
            if(score[0] > score[1]){
                return {"Gold Medal","Silver Medal"};
            }
            else{
                return {"Silver Medal","Gold Medal"};
            }
        }


        sort(v.begin(), v.end());
        
       u_map[v[n - 1]] = "Gold Medal";
       u_map[v[n - 2]] = "Silver Medal";
       u_map[v[n - 3]] = "Bronze Medal";

       while(i > 3){
            u_map[v[n - i]] = to_string(i);
            i--;
       }

       for(int i = 0; i < n ; i++){
            answer.push_back(u_map[score[i]]);
      
       }

    return answer;
    }
};