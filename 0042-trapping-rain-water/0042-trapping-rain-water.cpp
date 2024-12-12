class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int result = 0;
        int mleft = 0;
        int mright = 0;
        while(left <= right){
            if(height[left] <= height[right]){
                if(height[left] >= mleft){
                    mleft = height[left];
                }
                else{
                    result += mleft - height[left];
                }
                left++;
            }
            else{
                if(height[right] >= mright){
                    mright = height[right];
                }
                else{
                    result += mright - height[right];
                }
                right--;
            }
            
        }

        return result;
        
    }
};