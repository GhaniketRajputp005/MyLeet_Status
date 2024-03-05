class Solution {
public:
    int minimumLength(string s) {

        int i = 0, j = s.size() - 1;
        while (i < j) {
            if (s[i] != s[j]) {
                return j - i + 1;
            } else {
                char ch = s[i];
                while (i <= j && s[i] == ch )
                    i++;
                while ( i < j && s[j] == ch )
                    j--;
            }
        }
        if(j < i) return 0;
        return 1;
        
    }
};