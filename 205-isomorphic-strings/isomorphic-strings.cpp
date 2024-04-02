class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.length()==1) return true;
        vector<char>map_s_to_t(256,0), map_t_to_s(256,0);

        for(int i = 0; i< s.size(); i++){
            if(map_s_to_t[s[i]] == NULL)
                 map_s_to_t[s[i]] = t[i];
            else if(map_s_to_t[s[i]] != t[i])
                    return false;
            if(map_t_to_s[t[i]] == NULL)
                 map_t_to_s[t[i]] = s[i];
            else if(map_t_to_s[t[i]] != s[i])
                    return false;
        }
        return true;

        // if(s.length()==1) return true;
        // string s1 = s, t1 =  t;
        // unordered_map<char,char>umap1,umap2;
        // for(int i =0; i< s.size();i++){
        //     umap1[s[i]] = t[i];
        //     umap2[t[i]] = s[i];
        // }
        // for(int i= 0; i< s.size();i++){
        //     s[i] = umap1[s[i]];
        //     t[i] = umap2[t[i]];
        // }
        // if(s == t1 && t == s1) return true;
        // return false;
        
    }
};