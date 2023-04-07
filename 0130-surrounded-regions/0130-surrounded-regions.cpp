class Solution {
public:
    
    //function to convert the grid matrix 'B' to '0' and '0' to 'X'
    void convert(int n,int m,vector<vector<char>>& board){
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O')
                    board[i][j]='X';
                else if(board[i][j]=='B')
                    board[i][j]='O';
            }
        }
    }
    bool isvalid(int i,int j,int n,int m,vector<vector<char>>& board){
        if(i>=0 && i<n && j>=0 && j<m && board[i][j]=='O')
            return true;
        return false;
    }
        
    void dfs(int i,int j,int n,int m,vector<vector<char>>& board){
        board[i][j]='B';
        
        
        if(isvalid(i+1,j,n,m,board)){
            dfs(i+1,j,n,m,board);
        }
        if(isvalid(i-1,j,n,m,board)){
            dfs(i-1,j,n,m,board);
        }
        if(isvalid(i,j-1,n,m,board)){
            dfs(i,j-1,n,m,board);
        }
        if(isvalid(i,j+1,n,m,board)){
            dfs(i,j+1,n,m,board);
        }    
        
    }
        
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        
        //doing the boundary traversal to make the boudary zero as B
        
        //traversing the boundary columns 
        for(int i=0;i<n;i++){
            int j=0;
            if(board[i][j]=='O'){
                dfs(i,j,n,m,board);
            }
            j=m-1;
            if(board[i][j]=='O'){
                dfs(i,j,n,m,board);
            }
        }
        //traversing the boundary rows
        for(int j=0;j<m;j++){
            int i=0;
            
            if(board[i][j]=='O'){
                dfs(i,j,n,m,board);
            }
            i=n-1;
            if(board[i][j]=='O'){
                dfs(i,j,n,m,board);
            }
        }
        
        //now all the boundary zeros are converted to 'B', so now we only need to convert the 
        //surrounded regions to 'X' and the 'B' again back to '0'
        
        convert(n,m,board);
    }
};