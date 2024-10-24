class Solution {
public:
    int tribonacci(int n) {
        if(n == 0){
            return 0;
        }
        else if(n == 1 || n == 2){
            return 1;
        }
        int returns [n];
        returns[0] = 0;
        returns[1] = 1;
        returns[2] = 1;
        for(int i = 3; i < n ; i++){
            returns[i] = returns[i - 1] + returns[i - 2] + returns[i - 3];
        }
        return returns[n - 1] + returns[n - 2] + returns[n - 3];
    }
};