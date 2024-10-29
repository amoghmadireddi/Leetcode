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
        minheap.push(num);
        if(minheap.size() > maxheap.size() + 1){
            int num2 = minheap.top();
            minheap.pop();
            maxheap.push(num2);
        }
        if(maxheap.size()){
            while(maxheap.top() > minheap.top()){
                int num2 = maxheap.top();
                int num3 = minheap.top();
                maxheap.pop();
                minheap.pop();
                maxheap.push(num3);
                minheap.push(num2);
            }
        }
    }
    
    double findMedian() {
        if(maxheap.size() == minheap.size()){
            return (minheap.top() + maxheap.top()) / 2.0;
        }
        return minheap.top();
        
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */