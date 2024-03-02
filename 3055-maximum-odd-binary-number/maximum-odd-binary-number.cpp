class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string s1 = s;
        int ctr = 0;
        for(int i = 0; i< s1.length(); i++){
            if(s1[i] == '1'){
                s1[i] = '0';
                ctr++;
            }
        }
        s1[s1.size()-1] = '1';
        ctr--;
        while(ctr>=1){
            s1[ctr-1] = '1';
            ctr--;
        }
        return s1;

    }
};