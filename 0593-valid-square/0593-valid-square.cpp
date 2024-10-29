class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        //square doesn't have to algined wtih axises, could be tilted.
        //squares lengths are all the same and diagonals are same. Use this to our advantage.

        set<double> lengths;
        vector<vector<int>> points = {p1, p2, p3, p4};        

        for(int first = 0; first < 4; first++){
            for(int second = first + 1; second < 4; second++){
                double current = sqrt((points[first][0] - points[second][0]) * (points[first][0] - points[second][0]) + (points[first][1] - points[second][1]) * (points[first][1] - points[second][1]));
                if(current == 0){
                    return false;
                }
                lengths.insert(current);
            }
        }

        return lengths.size() == 2;
    }
};