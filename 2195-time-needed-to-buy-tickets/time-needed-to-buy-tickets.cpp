class Solution {
public:
    int timeRequiredToBuy(vector<int>& v, int k) {
        // int n = v.size();
        // int t = 0;
        // while (true) {
        //     for (int i = 0; i < n; i++){
        //         if (v[i] > 0) {
        //             v[i]=v[i]-1;
        //             t++;
        //         }
        //     if (i == k && v[i] == 0)
        //         return t;
        // }
        // }


        int tt = 0;

        for(int i = 0; i < v.size(); i++){

            if( i <= k)
            tt += min(v[i], v[k]);
            else{
                tt += min(v[k] - 1, v[i]);
            }

           
        }
    
    return  tt;
    
}
}
;