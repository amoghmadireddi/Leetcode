class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int sum = nums[0];
        int m1 = INT_MAX;
        int m2 = INT_MAX;
        int n = nums.size();
        
        for(int i = 1; i < n; i++){
            if(m1 > nums[i]){
                m2 = m1;
                m1 = nums[i];
            }
            else if (m2 > nums[i]){
                m2 = nums[i];
            }
        }
        return sum + m1 + m2;
    }
};