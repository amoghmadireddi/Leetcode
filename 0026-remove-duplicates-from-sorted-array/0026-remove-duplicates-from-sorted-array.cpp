class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int elements = nums.size();
        int next_index = 0;
        for(int i = 0; i < elements; i++){
            if(i == 0 || nums[i] != nums[i - 1]){
                nums[next_index++] = nums[i];
            }
        }

        return next_index;
    }
};