class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        // find the position of rook
        int row = 0;
        int col = 0;
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[i].size(); j++) {
                if (board[i][j] == 'r' || board[i][j] == 'R') {
                    row = i;
                    col = j;
                    break;
                }
            }
        }
        bool isUpper = isupper(board[row][col]) ? 1 : 0;
        
        // check the up/down/left/right
        int res = 0;
        vector<pair<int, int>> actions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for (int i = 0; i < actions.size(); i++) {
            int r = row + actions[i].first;
            int c = col + actions[i].second;
            while (isValid(board, r, c)) {
                if (board[r][c] == '.') {
                    r = r + actions[i].first;
                    c = c + actions[i].second;
                }
                else if (isUpper == 1 && islower(board[r][c])) {
                    res++;
                    break;
                }
                else if (isUpper == 0 && isupper(board[r][c])) {
                    res++;
                    break;
                }
                else {
                    break; // hit the color chess
                }
            }
        }
        return res;
    }
    
    bool isValid(vector<vector<char>>& board, int r, int c) {
        if (0 <= r && r < board.size() && 0 <= c && c < board[0].size()) {
            return true;
        }
        return false;
    }
};