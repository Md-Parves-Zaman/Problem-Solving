class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //unordered_set of String:
        unordered_set<string>numberFound;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]!='.'){
                    if(!numberFound.insert(to_string(i) + " row " + board[i][j]).second){
                        return false;
                    }

                    if(!numberFound.insert(to_string(j) + " column " + board[i][j]).second){
                        return false;
                    }
                    int boxNumber=((i/3)*3) + (j/3);
                    if(!numberFound.insert(to_string(boxNumber) + " box " + board[i][j]).second){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
