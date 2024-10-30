class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        while(low < high){
            int mid = (low + high) / 2;
            if(nums[mid] > nums[high]){
                low = mid + 1;
            }
            else{
                high = mid;
            }
        }
        int rotation = low;
        low = 0;
        high = nums.size() - 1;
        while(low <= high){
            int mid = (low + high) / 2;
            int real_middle = (mid + rotation) % nums.size();
            if(nums[real_middle] == target){
                return real_middle;
            }
            if(nums[real_middle] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        
        return -1;
    }
};