class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int length = arr.size();
        int index = 0;
        int i = 0;
        for (; index < length; ++i, ++index) {
            if (arr[i] == 0) ++index;
        }
        if (index == length + 1) {
            arr[length - 1] = 0;
            index = length - 2;
            i -= 2;
        } else {
            --index;
            --i;
        }
        while (i >= 0) {
            if (arr[i] == 0) {
                arr[index--] = 0;
            }
            arr[index--] = arr[i--];
        }
    }
};
