class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        int low = 0;
        int high = size - 1;
        int mid = (low + high) / 2;
        while(low < high){
            int diff = target - nums[mid];
            if(diff == 0){
                return mid;
            }
            else if(diff > 0){
                low = mid + 1;
            }
            else{
                high = mid;
            }
            mid = (low + high) / 2;
        }
        if(target > nums[mid]){
            mid += 1;
        }
        return mid;
    }
};