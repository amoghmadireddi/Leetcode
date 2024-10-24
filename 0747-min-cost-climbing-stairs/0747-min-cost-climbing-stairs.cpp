class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int size = cost.size();
        int a = cost[0];
        if(size == 1){
            return a;
        }
        int b = cost[1];
        for(int i = 2; i < size; i++){
            // a references cost of step i - 1
            // b is cost of step i
            int temp = a;
            a = b;
            b = min(temp, b) + cost[i];
        }
        return min(a, b);
    }
};