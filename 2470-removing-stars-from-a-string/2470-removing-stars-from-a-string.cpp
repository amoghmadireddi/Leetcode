class Solution {
public:
    string removeStars(string s) {
        string returner;
        size_t end = s.size();
        for(size_t i = 0; i < end; i++){
            if(s[i] == '*'){
                returner.pop_back();
            }
            else{
                returner.push_back(s[i]);
            }
        }
        return returner;
        
    }
};