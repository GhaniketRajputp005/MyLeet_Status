class Solution {
public:
    string compressedString(string word) {
        
        string s = "";
        int ctr  =1;
        char ch = word[0];
        int len = word.size();

        for(int i = 1; i<len; i++){

            if(ch == word[i] && ctr < 9) ctr++;
            else{

                s += (ctr + '0');
                s += ch;
                ch = word[i];
                ctr = 1;
            }
        }
                s += (ctr + '0');
                s += ch;
        

        return s;
    }
};