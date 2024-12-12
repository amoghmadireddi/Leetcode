class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i = 0; i < n; i++){
            k = k ^ nums[i];
        }
        int count = 0;
        while (k) {
            count += k & 1; 
            k >>= 1; 
        }
        return count;

    }
};