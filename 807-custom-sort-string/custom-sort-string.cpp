class Solution {
public:
    string customSortString(string order, string s) {
        
        unordered_map<char,int>umap;
        string str;

        for(auto i: s){
            umap[i]++;
        }

        for(auto i: order){

            if(umap.size() == 0) return str;
            if(umap.find(i) != umap.end()){
                while(umap[i]--){
                    str += i;
                }
                umap.erase(i);
            }
        }

        for(auto i : umap){

                while(i.second--){
                    str += i.first;
                }
              

        }
        return str;


    }
};