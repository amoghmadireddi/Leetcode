class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> letters(26,0);
        for(char c:s){
            letters[c - 'a']++;
        }
        for(char c:t){
            letters[c - 'a']--;
        }
        int total = 0;
        for(int i = 0; i < 26; i++){
            total += abs(letters[i]);
        }
        return total / 2;
    }
};