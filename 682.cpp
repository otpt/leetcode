class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> points;
        
        for (auto & op : ops) {
            switch (op[0]) {
                case '+':
                    points.push_back(points[points.size() - 1] + points[points.size() - 2]);
                    break;
                case 'C':
                    points.pop_back();
                    break;
                case 'D':
                    points.push_back(2 * points.back());
                    break;
                default:
                    points.push_back(stoi(op));
            }
        }
        
        return accumulate(points.begin(), points.end(), 0);
    }
};
