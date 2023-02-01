class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int a[10][9] = {0}, b[10][9] = {0};
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                int temp = board[i][j] -'0';
                if(board[i][j]>='1' && board[i][j]<='9'){
                    if(a[temp][i] || b[temp][j]){
                        return false;
                    }
                    for(int k=0;k<3;k++){
                        for(int l=0;l<3;l++){
                            if(a[temp][3*(i/3)+k] && b[temp][3*(j/3)+l] && 
                            board[3*(i/3)+k][3*(j/3)+l]==board[i][j]){
                                return false;
                            }
                        }
                    }

                    a[temp][i]=1;
                    b[temp][j]=1;
                }
            }       
        }

        return true;

    }
};