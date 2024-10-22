class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int pairs = 0;
        map<vector<int>, int> row_freq;
        int a = grid.size();

        for(int i = 0; i < a; i++){
            row_freq[grid[i]]++;
        }

        for(int i = 0; i < a; i++){
            std::vector<int> row;
            for(int j = 0; j < a; j++){
                row.push_back(grid[j][i]);
            }
            pairs += row_freq[row];
        }

        return pairs;
    }
};