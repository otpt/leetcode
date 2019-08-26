class Solution {
private:
    string digits = "0123456789abcdef";
    
    int aton(string hex) {
        int pos1 = digits.find(hex[0]);
        int pos2 = digits.find(hex[1]);
        
        return 16 * pos1 + pos2;
    }
    
    int dist_square(int a, int b) {
        return (a - b) * (a - b);
        
    }
    
    string findClosest(string value) {
        vector<string> check;
        int pos = digits.find(value[0]);
        if (pos > 0) {
            check.push_back({digits[pos - 1], digits[pos - 1]});
        }
        if (pos < 15) {
            check.push_back({digits[pos + 1], digits[pos + 1]});
        }
        check.push_back({value[0], value[0]});
        
        int min_dist = INT_MAX;
        string result;
        for (int i = 0; i < check.size(); ++i) {
            int dist = dist_square(aton(value), aton(check[i]));
            if (dist < min_dist) {
                min_dist = dist;
                result = check[i];
            }            
        }
        return result;
    }
public:
    string similarRGB(string color) {
        return "#" + findClosest(color.substr(1,2)) + findClosest(color.substr(3,2)) + findClosest(color.substr(5,2));        
    }
};
