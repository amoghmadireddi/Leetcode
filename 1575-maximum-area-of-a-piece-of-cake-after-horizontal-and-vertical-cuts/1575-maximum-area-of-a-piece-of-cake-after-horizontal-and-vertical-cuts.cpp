class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        long h_best = horizontalCuts[0];
        for(int i = 1; i < horizontalCuts.size(); i++){
            h_best = max(h_best, (long)(horizontalCuts[i] - horizontalCuts[i - 1]));
        }
        h_best = max(h_best, (long)(h - horizontalCuts[horizontalCuts.size() - 1]));
        long w_best = verticalCuts[0];
        for(int i = 1; i < verticalCuts.size(); i++){
            w_best = max(w_best, (long)(verticalCuts[i] - verticalCuts[i - 1]));
        }
        w_best = max(w_best, (long)(w - verticalCuts[verticalCuts.size() - 1]));
        return ((h_best % 1000000007) * (w_best % 1000000007)) % 1000000007;
    }
};