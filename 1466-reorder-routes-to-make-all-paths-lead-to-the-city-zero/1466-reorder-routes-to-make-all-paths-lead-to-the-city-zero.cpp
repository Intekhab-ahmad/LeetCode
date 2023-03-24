class Solution {
public:
    
    int dfs(int root,vector<vector<int>> &graph,vector<int> &visited){
        
        auto count=0;
        
        visited[root]=1;
        for(auto i:graph[root]){
            if(visited[abs(i)]==0){
                
                    count+=dfs(abs(i),graph,visited)+(i>0);
            }
        }
        return count;
        
        
    }
    int minReorder(int n, vector<vector<int>>& connections) {
        
        
        vector<vector<int>> graph(n);
        
        for(auto &i:connections){
            graph[i[0]].push_back(i[1]);
            graph[i[1]].push_back(-i[0]);
        }
        vector<int> visited(n,0);
        
        return dfs(0,graph,visited);
        
        
        
        
    }
};