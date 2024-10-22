class Solution {
public:
    bool closeStrings(string word1, string word2) {
        //store occurrences of each letter in each word
        std::vector<int> word1freq(26,0);
        std::vector<int> word2freq(26,0);
        for(char c : word1){
            word1freq[c - 'a']++;
        }
        for(char c : word2){
            word2freq[c - 'a']++;
        }

        //make sure the letters match
        //if a in word1 but not word 2, can't change a to letter in word2
        for(int i = 0; i < 26; i++){
            if((word1freq[i] && !word2freq[i]) || (!word1freq[i] && word2freq[i])){
                return false;
            }
        }

        //make sure the freqs match. If diff num of freqs, swaps won't work
        std::unordered_map<int, int> freqfreq;
        for(auto i : word1freq){
            freqfreq[i]++;
        }
        for(auto i : word2freq){
            freqfreq[i]--;
        }
        for(auto it : freqfreq){
            if(it.second != 0){
                return false;
            }
        }
        return true;
    }
};