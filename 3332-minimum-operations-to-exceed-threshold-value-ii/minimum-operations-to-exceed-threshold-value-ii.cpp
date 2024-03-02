class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
       priority_queue<long int,vector<long int>,greater<long int>>q;

       for(auto i : nums){
           q.push(i);
       }
       int ctr = 0;
       while(q.top() < k){

        
           long  int val1 = q.top();
            q.pop();
            long int val2 = q.top();
            q.pop();
            q.push(min(val1, val2)*2 + max(val1,val2));
            ctr++;
       }
       return ctr;
    }
};