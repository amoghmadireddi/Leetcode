class MedianFinder {
private:
//store lower elements
        priority_queue<int> maxheap;
        //store higher elements
        priority_queue<int, vector<int>, std::greater<int>> minheap;
public:
    MedianFinder() {
    }
    
    void addNum(int num) {
        if(maxheap.empty() || maxheap.top() > num){
            maxheap.push(num);
        }
        else{
            minheap.push(num);
        }
        if(minheap.size() > maxheap.size() + 1){
            maxheap.push(minheap.top());
            minheap.pop();
        }
        else if(maxheap.size() > minheap.size() + 1){
            minheap.push(maxheap.top());
            maxheap.pop();
        }
    }
    
    double findMedian() {
        int diff = maxheap.size() - minheap.size();
        if(!diff){
            return (minheap.top() + maxheap.top()) / 2.0;
        }
        else if(diff > 0){
            return maxheap.top();
        }
        else{
            return minheap.top();
        }
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */