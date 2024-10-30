class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        std::priority_queue<int, vector<int>, std::greater<int>> elements;
        int size = nums.size();
        for(int i = 0; i < k; i++){
            elements.push(nums[i]);
        }
        for(int i = k; i < size; i++){
            int num = nums[i];
            if(num > elements.top()){
                elements.pop();
                elements.push(num);
            }
            
        }
        return elements.top();
    }
};