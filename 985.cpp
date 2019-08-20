class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        vector<int> result;
        
        int even_sum = 0;
        for (auto & a : A) {
            if ((a & 1) == 0) {
                even_sum += a;
            }
        }
        
        for (auto & query : queries) {
            int value = query[0];
            int index = query[1];
            
            if ((A[index] & 1) == 0) {
                even_sum -= A[index];
            }
            A[index] += value;
            if ((A[index] & 1) == 0) {
                even_sum += A[index];
            }
            
            result.push_back(even_sum);
        }
        
        return result;
    }
};
