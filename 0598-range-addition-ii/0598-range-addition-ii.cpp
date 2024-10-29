class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int min_row = m;
        int min_column = n;
        int size = ops.size();
        for(int i = 0; i < size; i++){
            min_row = min(min_row, ops[i][0]);
            min_column = min(min_column, ops[i][1]);
        }
        return min_row * min_column;
    }
};