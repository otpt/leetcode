class Logger {
public:
    /** Initialize your data structure here. */
    Logger() {
        
    }
    
    /** Returns true if the message should be printed in the given timestamp, otherwise returns false.
        If this method returns false, the message will not be printed.
        The timestamp is in seconds granularity. */
    bool shouldPrintMessage(int timestamp, string message) {
        if (messages.find(message) != messages.end() && messages[message] + 10 > timestamp) {
            return false;
        }
        messages[message] = timestamp;
        return true;
    }
private:
    unordered_map<string, int> messages;
};
