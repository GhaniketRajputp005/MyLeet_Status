class Solution {
public:
    bool rotateString(string s, string goal) {
       
     int size = s.size();
     vector<int>v;
     for(int i =0; i< size;i++){
         if(s[0] ==goal[i]){
             v.push_back(i);
         }
     }

    if(v.empty()){
        return 0;
    }
   
    int i = 0,idx = 0, j = v[idx];
     while(i!=size){
         if(s[i] == goal[j]){
             i++;
             j++;
             if(j == size){
                 j = 0;
             }
         }
         else{
             if(v.size()!=1 && idx != v.size()-1){
                 j = v[++idx];
                 i = 0;
             }
             else{
                 return 0;
             }

         }
     }
     return 1;
   
    }
};