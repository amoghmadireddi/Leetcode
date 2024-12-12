class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char, int> freq;
        int n = s.length();
        for(int i = 0; i < n; i++){
            freq[s[i]]++;
        }
        int removals = 0;
        std::unordered_set<int> unique;
        unique.insert(0);
        for(auto & thing: freq){
            if(unique.count(thing.second) != 0){
                while(unique.count(thing.second) != 0){
                    removals++;
                    thing.second--;
                    if(thing.second == 0){
                        break;
                    }
                }
            }
            unique.insert(thing.second); 
        }
        return removals;
    }
};