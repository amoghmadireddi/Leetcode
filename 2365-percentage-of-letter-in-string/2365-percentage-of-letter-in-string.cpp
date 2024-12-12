class Solution {
public:
    int percentageLetter(string s, char letter) {
        int n = s.length();
        int o = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == letter){
                o++;
            }
        }
        return o * 100 / n;
        
    }
};