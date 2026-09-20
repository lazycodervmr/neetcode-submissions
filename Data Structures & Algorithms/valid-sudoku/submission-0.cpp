class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_set<int> row[9];
        unordered_set<int> col[9];
        unordered_set<int> box[9];
        
        for(int r = 0; r < board.size(); r++){
            for(int c = 0; c < board[1].size(); c++){
                char val = board[r][c];
                if(val == '.'){continue;}
                int box_idx = (r/3)*3 + (c/3);
                if(row[r].count(board[r][c]) ||  col[c].count(board[r][c]) || box[box_idx].count(board[r][c])){
                    return false;
                }
                row[r].insert(val);
                col[c].insert(val);
                box[box_idx].insert(val);
            }
        }
        return true;
    }
};
