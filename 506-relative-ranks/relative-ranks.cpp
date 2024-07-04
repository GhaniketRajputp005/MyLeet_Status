class Solution {
public:
 vector<string> findRelativeRanks(vector<int>& score) {

        unordered_map<int, string> u_map;

        vector<int> v(score);
        vector<string>answer;
        int n = score.size(), i = n;

        sort(v.begin(), v.end(),greater<int>());

        for(int i = 0;i < n; i++){
            if(i == 0) u_map[v[i]] = "Gold Medal";
            else if(i == 1) u_map[v[i]] = "Silver Medal";
            else if(i == 2) u_map[v[i]] = "Bronze Medal";
            else{
                u_map[v[i]] = to_string(i + 1);
            }
        }

        for (int i = 0; i < n; i++) {
            answer.push_back(u_map[score[i]]);
        }

        return answer;





//     if(a.first >= b.first){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
//    

//         vector<string> answer(score .size());
//         vector<pair<int,int>>arr_pair;

//         for(int i = 0; i < score.size(); i++){
//             arr_pair[i].first = score[i];
//             arr_pair[i].second = i;
//         }

//         sort(arr_pair.begin(),arr_pair.end(),comp);

//         for(int i = 0; i < score.size();i++){
//             if(i==0){
//                 answer[arr_pair[i].second] = "Gold Medal";
//             }
//             else if(i == 1){
//                  answer[arr_pair[i].second] ="Silver Medal";
//             }
//             else if(i == 2){
//                  answer[arr_pair[i].second] = "Bronze Medal";
//             }
//             else{
//                  answer[arr_pair[i].second] = to_string(i + 1);
//             }
//         }
//         return answer;














    }
};