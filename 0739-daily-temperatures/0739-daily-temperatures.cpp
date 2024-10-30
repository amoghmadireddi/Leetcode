class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        std::stack<int> indices;
        int size = temperatures.size();
        std::vector<int> returns(size, 0);
        for(int i = 0; i < size; i++){
            while(!indices.empty() && (temperatures[indices.top()] < temperatures[i])){
                returns[indices.top()] = i  - indices.top();
                indices.pop();
            }
            indices.push(i);
        }
        return returns;
    }
};