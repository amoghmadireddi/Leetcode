class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size = nums.size();
        int best_reach = nums[0];
        for(int i = 1; i <=best_reach && i < size; i++){
            if(best_reach)
            best_reach = max(best_reach, i + nums[i]);
        }
        return best_reach >= size - 1;
        
    }
};