class Solution {
public:
    
    void dfs(string source , string destination , unordered_map<string,vector<pair<string,double>>>& graph,unordered_map<string,int>&visited,double &ans, double temp){
if(visited.count(source))return;
if(source == destination ){
ans = temp;
return;
}
visited[source]=1;
for(auto x : graph[source]){
dfs(x.first,destination,graph,visited,ans,temp*x.second);
}
return ;
}
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        
        unordered_map<string,vector<pair<string,double>>> graph;
        for(int i=0;i<equations.size();i++){
            graph[equations[i][0]].push_back({equations[i][1],values[i]});
            graph[equations[i][1]].push_back({equations[i][0],1.0/values[i]});
            
        }
        vector<double> finalans;
        
        for(int i = 0 ; i < queries.size() ;i++){
        string source = queries[i][0];
        string destination = queries[i][1];

        unordered_map<string,int>visited;
        double ans = -1.0;
        double temp = 1;
        if(graph.count(source)){
        dfs(source,destination,graph,visited,ans,temp);
        finalans.push_back(ans);}
        else{
            finalans.push_back(-1);
        }
    }
    return finalans;
    }
};