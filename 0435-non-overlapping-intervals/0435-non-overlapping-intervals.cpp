class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b){
        return a[1] < b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int size = intervals.size();
        if(size == 1){
            return 0;
        }
        sort(intervals.begin(), intervals.end(), cmp);
        int prev = 0;
        int count_intervals = 1;
        for(int i = 1; i < size; i++){
            if(intervals[i][0] >= intervals[prev][1]){
                prev = i;
                count_intervals++;
            }
        }
        return size - count_intervals;


        
    }
};