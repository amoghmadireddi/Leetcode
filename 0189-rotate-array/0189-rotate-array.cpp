class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k = k % size;
        for(int i = 0; i < size / 2; i++){
            int temp = nums[i];
            nums[i] = nums[size - i - 1];
            nums[size - i - 1] = temp;
        }
        for(int i = 0; i < k / 2; i++){
            int temp = nums[i];
            nums[i] = nums[k - i - 1];
            nums[k - i - 1] = temp;
        }
        for(int i = 0; i < ((size - k) / 2); i++){
            int temp = nums[k + i];
            nums[k + i] = nums[size - i - 1];
            nums[size- i - 1] = temp;
        }
    }
};