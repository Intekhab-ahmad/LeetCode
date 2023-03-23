class Solution {
public:

    
    void dfs(int root,vector<vector<int>>& graph,vector<int>& visited){

        if(visited[root]==1)
            return;

        visited[root]=1;
        for(auto x:graph[root]){
            if(visited[x]==0){
                dfs(x,graph,visited);
            }
        }
        return;
    }
    int makeConnected(int n, vector<vector<int>>& connections) {


        if(n-1>connections.size())
            return -1;

        vector<vector<int>> graph(n);
        int count=0;

        for(auto x: connections){
            graph[x[0]].push_back(x[1]);
            graph[x[1]].push_back(x[0]);
        }

        /*for(auto x:graph){
            for(int i=0;i<x.size();i++)
                cout<<x[i]<<" ";
            cout<<endl;
        }*/
        vector<int> visited(n,0);
        
        
        // this will not work to find the isolated nodes as there can be two nodes connected with each other and still isolated
       /* for(int i=0;i<n;i++){
            if(graph[i].size()==0){ 
                count++;
            }
        }*/

        // we sill apply dfs on every componentand find the no of components in the graph
      
        for(int i=0; i<n; i++)
            if(!visited[i])
            {
                dfs(i,graph,visited);
                count++;
            }

        





        return count-1;
    }
};