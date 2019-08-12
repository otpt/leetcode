class Solution {
public:
    int depthSum(vector<NestedInteger>& nestedList, int depth = 1) {
        int sum = 0;
        for (auto& item : nestedList) {
            sum += item.isInteger() ? depth * item.getInteger() : depthSum(item.getList(), depth + 1);
        }
        return sum;
    }
};
