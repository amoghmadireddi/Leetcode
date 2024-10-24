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
            //stores best value 2 houses away at least
            temp = max(a, temp);
            //a is valuse of prev house
            a = b;
            //choose either best value 2 away + current value of value calculated for prev
            b = max(nums[i] + temp,b);
        }
        return max(a, b);
    }
};