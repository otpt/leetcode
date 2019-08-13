class MovingAverage {
public:
    int index;
    vector<int> numbers;
    int sum;
    bool full;
    
    MovingAverage(int size)
        : index(0)
        , numbers(size, 0)
        , sum(0)
        , full(false) {
    }
    
    double next(int val) {
        sum -= numbers[index];
        numbers[index++] = val;
        sum += val;
        if (index == size) {
            full = true;
            index %= size;
        }
        
        return (1.0 * sum) /  (full ? size : index);
    }
};
