class Solution {
public:
    bool isAnagram(string s, string t) {
  

        vector<int>v(26),u(26);
        if(s.size() != t.size()) return false;

        for(int i = 0 ; i < s.length();  i++){
            v[s[i] - 'a']++;
            v[t[i] - 'a']--;
        }

        for(auto i : v){
            if(i != 0) return false;
        }
        return true;
        // for(int i =0 ;i<s.size();i++){
        //     v[s[i] - 'a']++;
        //     u[t[i] - 'a']++;

        // }
        // if(v != u) return false;
        // return true;


        // unordered_map<char,int>m;
        // for(auto i: s){
        //     m[i]++;
        // }
        // for(auto i: t){
        //     m[i]--;
        // }
        // for(auto i:m){
        //     if(i.second != 0){
        //         return false;
        //     }
        // }
        // return true;

     
    }
};