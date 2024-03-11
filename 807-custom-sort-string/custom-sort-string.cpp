class Solution {
public:
    string customSortString(string order, string s) {
        
        unordered_map<char,int>umap;
        int ctr = 0;
        string str;
        for(auto i: order){
            umap[i] = ctr++;
        }

        vector<pair<int, char >>v;

        for(auto i : s){
           if(umap.find(i) != umap.end()){
                v.push_back({umap[i],i});
           }
           else{
                v.push_back({INT_MAX,i});
           }
        }

        sort(v.begin(), v.end());

        for(auto i: v){
            str += i.second;
        }
         
 return str;





        ///// O(n +n + m)
        // unordered_map<char,int>umap;
        // string str;

        // for(auto i: s){
        //     umap[i]++;
        // }

        // for(auto i: order){

        //     if(umap.size() == 0) return str;
        //     if(umap.find(i) != umap.end()){
        //         while(umap[i]--){  // this loop O(1) as
        //                          //  frequency is constant
        //             str += i;
        //         }
        //         umap.erase(i);
        //     }
        // }

        // for(auto i : umap){

        //         while(i.second--){
        //             // this loop O(1) as
        //                          //  frequency is constant
        //             str += i.first;
        //         }
              

        // }
        // return str;


    }
};