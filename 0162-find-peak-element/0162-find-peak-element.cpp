class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int size = nums.size();
        int low = 0;
        int high = size - 1;
        int mid;
        while(low <= high){
            mid = (low + high) / 2;
            bool greater_left = (mid == 0) || nums[mid] > nums[mid - 1];
            bool greater_right = (mid == size - 1) || nums[mid] > nums[mid + 1];
            if(greater_left && greater_right){
                return mid;
            }
            else if(greater_left){
                low = mid + 1;
            }
            else{
                high = mid;
            }
        }
        return mid;
        
    }
};