class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int boxes[3][3][9] = {0};
        int rows[9][9] = {0};
        int cols[9][9] = {0};
        
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                if (board[i][j] == '.') continue;
                
                int num = board[i][j] - '0' - 1;
                
                if (++rows[j][num] >= 2) return false;
                if (++cols[i][num] >= 2) return false;
                if (++boxes[i / 3][j / 3][num] >= 2) return false;
            }
        }
        
        return true;
    }
};
