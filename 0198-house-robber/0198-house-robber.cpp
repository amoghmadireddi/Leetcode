class Solution {
public:
    int rob(vector<int>& nums) {
        int size = nums.size();
        int a = nums[0];
        if(size == 1){
            return a;
        }
        int b = nums[1];
        int temp;
        // we will use a to store the max value from houses 2 away or more
        for(int i = 2; i < size; i++){
            temp = max(a, temp);
            a = b;
            b = max(nums[i] + temp,b);
        }
        return max(a, b);
    }
};