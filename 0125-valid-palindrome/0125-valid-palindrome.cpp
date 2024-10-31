class Solution {
public:
    bool isPalindrome(string s) {
        int size = s.length();
        int low = 0;
        int high = size - 1;
        while(low <= high){
            if(!isalnum(s[low])){
                low++;
                continue;
            }
            if(!isalnum(s[high])){
                high--;
                continue;
            }
            if(tolower(s[low]) != tolower(s[high])){
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
};