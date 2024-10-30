class SnakeGame {
private:
    int width;
    int height;
    vector<vector<int>> food;
    deque<vector<int>> snake;
    unordered_set<int> visited;
    int foodIdx;
public:
    /** Initialize your data structure here.
        @param width - screen width
        @param height - screen height 
        @param food - A list of food positions
        E.g food = [[1,1], [1,0]] means the first food is positioned at [1,1], the second is at [1,0]. */
    SnakeGame(int width, int height, vector<vector<int>>& food) {
        this->width = width;
        this->height = height;
        this->food = food;
        snake.push_back({0,0});
        foodIdx = 0;
    }
    
    /** Moves the snake.
        @param direction - 'U' = Up, 'L' = Left, 'R' = Right, 'D' = Down 
        @return The game's score after the move. Return -1 if game over. 
        Game over when snake crosses the screen boundary or bites its body. */
    int move(string direction) {
        auto headx = snake.front()[0];
        auto heady = snake.front()[1];
        
        auto tail = snake.back();
        auto tailPos = tail[0] * width + tail[1];
        snake.pop_back();
        visited.erase(tailPos);
        if (direction == "U")
            --headx;
        else if (direction == "D")
            ++headx;
        else if (direction == "L")
            --heady;
        else if (direction == "R")
            ++heady;
        
        auto headPos = headx * width + heady;
        if (headx<0||headx>=height||heady<0||heady>=width||visited.count(headPos))
            return -1;
        
        snake.push_front({headx, heady});
        visited.insert(headPos);
        
        if (foodIdx < food.size() && food[foodIdx][0] == headx && food[foodIdx][1] == heady) {
            snake.push_back(tail);
            visited.insert(tailPos);
            ++foodIdx;
        }
        
        return snake.size() - 1;
    }
};

/**
 * Your SnakeGame object will be instantiated and called as such:
 * SnakeGame* obj = new SnakeGame(width, height, food);
 * int param_1 = obj->move(direction);
 */