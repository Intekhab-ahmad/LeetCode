class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> index;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0)
                    index.push_back({i,j});
            }
        }
       
        for(int i=0;i<index.size();i++){
            int a=index[i][0];
            int b=index[i][1];
            cout<<n;
            for(int j=0;j<n;j++){
                matrix[j][b]=0;
                cout<<a<<j<<endl;
            }
            for(int j=0;j<m;j++)
                matrix[a][j]=0;
            
        }
        return;
        
    }
};