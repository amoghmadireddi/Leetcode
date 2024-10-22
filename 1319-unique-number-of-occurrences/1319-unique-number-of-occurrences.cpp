class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        std::unordered_map<int, int> nums;
        int size = arr.size();
        for(int i = 0; i < size; i++){
            nums[arr[i]] += 1;
        }

        std::unordered_set<int> occurences;
        for (const auto& pair : nums) {
            if(occurences.find(pair.second) == occurences.end()){
                occurences.insert(pair.second);
            }
            else{
                return false;
            }
        }
        return true;
    }
};