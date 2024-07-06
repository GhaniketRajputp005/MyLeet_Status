class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {

        int n = colors.size(), ctr = 0;
        for(int i = 0 ; i < n; i++ ){

            if(colors[i % n] != colors[(i+1) % n] && colors[i % n] == colors[(i+2) % n] )
                ctr++;
        }
        return ctr;
        
    }
};