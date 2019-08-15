class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int result = 0;
        
        int i, j;
        for (i = 0; ; ++i) {
            for (j = 0; j < 8; ++j) {
                if (board[i][j] == 'R') {
                    break;
                }
            }
            if (j < 8) {
                break;
            }
        }
        
        for (int left = j - 1; left >= 0; --left) {
            switch (board[i][left]) {
                case '.' : continue;
                case 'p' : ++result;
            }
            break;
        }
        for (int right = j + 1; right < 8; ++right) {
            switch (board[i][right]) {
                case '.' : continue;
                case 'p' : ++result;
            }
            break;
        }
        for (int up = i - 1; up >= 0; --up) {
            switch (board[up][j]) {
                case '.' : continue;
                case 'p' : ++result;
            }
            break;
        }
        for (int down = i + 1; down < 8; ++down) {
            switch (board[down][j]) {
                case '.' : continue;
                case 'p' : ++result;
            }
            break;
        }
        
        return result;
    }
};
