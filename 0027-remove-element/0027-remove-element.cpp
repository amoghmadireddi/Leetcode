class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int elements = nums.size();
        for(int i = 0; i < elements; i++){
            if(nums[i] == val){
                nums[i--] = nums[elements - 1];
                elements--;
            }
        }

        return elements;
    }
};