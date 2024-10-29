class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> merged_intervals;
        sort(intervals.begin(), intervals.end());
        merged_intervals.push_back(intervals[0]);
        int size = intervals.size();
        for(int i = 1; i < size; i++){
            //now we check if we can merge this interval
            //if we can, we just need to modify the existing's end
            vector<int> & vector_back = merged_intervals.back();
            if(vector_back[1] >= intervals[i][0]){
                vector_back[1] = max(vector_back[1], intervals[i][1]);
            }
            else{
                merged_intervals.push_back(intervals[i]);
            }
        }
        return merged_intervals;
    }
};