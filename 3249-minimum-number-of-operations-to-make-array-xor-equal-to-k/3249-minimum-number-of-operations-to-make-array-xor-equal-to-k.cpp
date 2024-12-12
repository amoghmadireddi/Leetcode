class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int arrayxor = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            arrayxor = arrayxor ^ nums[i];
        }
        arrayxor = arrayxor ^ k;
         int count = 0;
        while (arrayxor) {
            count += arrayxor & 1; 
            arrayxor >>= 1; 
        }
        return count;

    }
};