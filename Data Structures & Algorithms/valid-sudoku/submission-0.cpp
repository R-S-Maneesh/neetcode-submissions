class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            vector<int> nums_r(10,0);
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    int num=board[i][j]-'0';
                    nums_r[num]++;
                    if(nums_r[num]>1){
                        return false;
                    }
                }
            }
        }
        for(int i=0;i<9;i++){
            vector<int> nums_c(10,0);
            for(int j=0;j<9;j++){
                if(board[j][i]!='.'){
                    int num=board[j][i]-'0';
                    nums_c[num]++;
                    if(nums_c[num]>1){
                        return false;
                    }
                }
            }
        }
        for(int i_lim=0;i_lim<9;i_lim+=3){
            for(int j_lim=0;j_lim<9;j_lim+=3){
                vector<int> blocks(10,0);
                for(int i=i_lim;i<i_lim+3;i++){
                    for(int j=j_lim;j<j_lim+3;j++){
                        if(board[i][j]!='.'){
                            int num=board[i][j]-'0';
                            blocks[num]++;
                            if(blocks[num]>1){
                                return false;
                            }
                        }
                    } 
                }
            }
        }
        return true;
    }
};
