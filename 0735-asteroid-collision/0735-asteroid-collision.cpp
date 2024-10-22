class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> nums;
        nums.push_back(asteroids[0]);
        size_t end = asteroids.size();
        for(size_t i = 1; i < end; i++){
            if(asteroids[i] > 0){
                nums.push_back(asteroids[i]);
            }
            else{
                if(nums.size() > 0 && nums.back() < 0){
                    nums.push_back(asteroids[i]);
                }
                else{
                    bool skip = false;
                    while(nums.size() > 0 && nums.back()> 0){
                        int sum = nums.back() + asteroids[i];
                        if(sum == 0){
                            nums.pop_back();
                            skip = true;
                            break;
                        }
                        else if(sum > 0){
                            skip = true;
                            break;
                        }
                        else{
                            nums.pop_back();
                            skip = false;
                        }
                    }
                    if(skip == false){
                        nums.push_back(asteroids[i]);
                    }
                }
                
                
            }
        }
        return nums;
    }
};