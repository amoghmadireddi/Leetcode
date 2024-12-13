class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int best = 0;
        int left = 0;
        unordered_set<char> letters;
        for(int i = 0; i < n; i++){
            if(letters.count(s[i]) == 0){
                letters.insert(s[i]);
                best = max(best, i - left + 1);
            }
            else{
                while(letters.count(s[i]) != 0){
                    letters.erase(s[left++]);
                }
                letters.insert(s[i]);
            }
        }


        return best;

    }
};