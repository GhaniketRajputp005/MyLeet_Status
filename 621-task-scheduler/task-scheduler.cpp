class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {

        vector<int> v(26);
        int time = 0;

        for (auto i : tasks) {

            // counting frequency
            v[i - 'A']++;
        }

        priority_queue<int> pq;

        for (int i = 0; i < v.size(); i++) {
            
            // using pq to store big jobs first
            // if big is at last then idle time will be more
            if(v[i] > 0)
            pq.push(v[i]);
        }

        while (!pq.empty()) { // untill pq is not empty as all jobs need
                              // to be done

            vector<int> temp;
            for (int i = 1; i <= n + 1; i++) {

                    // since current job needs to come at least n jobs after
                    // so we pop n+1 jobs at a time from pq.


                    // getting freq of top element, poping it
                    // subtracting it & storing updated freq back
                if (!pq.empty()) {

                    int freq = pq.top();
                    pq.pop();
                    freq--;
                    temp.push_back(freq);
                }
            }

            for(auto i: temp){

                // storing back the updated freq in stack 
                if(i != 0)
                    pq.push(i);
            }

            if(pq.empty()){
                // if pq is empty here, then it means all jobs are done
                // so the time will just add last jobs that are zero
                // in temp array 
                time += temp.size();
            }
            else{

                // and if pq is not empty, it means n+1 time to lgega hi
                time += n + 1;
            }
        }
        return time;
    }
};