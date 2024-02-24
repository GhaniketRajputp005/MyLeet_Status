class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size())
            return 0;
        s += s;
        int i = 0, j = 0, temp = 0, chkpt = 0;
        while (i < s.size() && j < goal.size()) {

            // if(s.size() -chkpt <=  goal.size()) return 0;
            if (s[i] == goal[j]) {
                j++;
            } else {
                chkpt = i - 1;
                // i = temp++ not doin coz jha
                // tk chk ho gya h ab usse aage check krna h
                j = 0;
                if (s[i] == goal[0])
                    continue;
            }
            i++;
            if (j == goal.size())
                return 1;
        }
        return 0;
    }

    //    s+=s;
    //    int i = 0,j =0,temp  = 0;;
    //    while(i < s.size()  && j < goal.size()){
    //        if(s[i] == goal[j]){
    //            i++;
    //            j++;
    //        }
    //        else{
    //            i = temp++;
    //            j = 0;
    //        }

    //    }
    //    if(j == goal.size()) return 1;
    //    return 0;

    // int size = s.size();
    // vector<int> v;
    // for (int i = 0; i < size; i++) {
    //     if (s[0] == goal[i]) {
    //         v.push_back(i);
    //     }
    // }

    // if (v.empty()) {
    //     return 0;
    // }

    // int i = 0, idx = 0, j = v[idx];
    // while (i != size) {
    //     if (s[i] == goal[j]) {
    //         i++;
    //         j++;
    //         if (j == size) {
    //             j = 0;
    //         }
    //     } else {
    //         if (v.size() != 1 && idx != v.size() - 1) {
    //             j = v[++idx];
    //             i = 0;
    //         } else {
    //             return 0;
    //         }
    //     }
    // }
    // return 1;
};