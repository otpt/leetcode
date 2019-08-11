class RecentCounter {
public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
        pings.push(t);
        
        while(pings.front() < t - 3000) {
            pings.pop();
        }
        
        return pings.size();
    }
private:
    queue<int> pings;
};
