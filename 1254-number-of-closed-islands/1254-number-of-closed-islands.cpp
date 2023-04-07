class Solution {
public:
    
    bool isvalid(int i,int j,int n,int m,vector<vector<int>> &grid){
        if(i>=0 && i<n && j>=0 && j<m &&grid[i][j]==0){
            return true;
        }
        return false;
    }
    
    void dfs(int i,int j,int n,int m,vector<vector<int>>& grid){
        grid[i][j]=1;
        
        
        if(isvalid(i+1,j,n,m,grid)){
            dfs(i+1,j,n,m,grid);
        }
        if(isvalid(i-1,j,n,m,grid)){
            dfs(i-1,j,n,m,grid);
        }
        if(isvalid(i,j-1,n,m,grid)){
            dfs(i,j-1,n,m,grid);
        }
        if(isvalid(i,j+1,n,m,grid)){
            dfs(i,j+1,n,m,grid);
        }    
        
    }
    int closedIsland(vector<vector<int>>& grid) {
     
        int n=grid.size();
        int m=grid[0].size();
        
        //doing the boundary traversal to make the boudary zero as 1
        
        //traversing the boundary 
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i*j==0 || i==n-1 || j==m-1){
                    cout<<i<<" "<<j;
                    if(grid[i][j]==0)
                        dfs(i,j,n,m,grid);
                }
            }
        }
        //ab poore grid pe dfs laga rahe hai count karne ke liy
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0){
                    ans++;
                    dfs(i,j,n,m,grid);
                }
            }
        }
        return ans;
        
    }
};