class Solution {
public:
// to basicaly iss question me hum ye karne waale hai ki humko rootnode(i.e. 1 here) se saare connected node ka ek list chahiy aur usse jo distance associated hai usme se sabse minimum distance hi hamaara ans hoga .

//1. map me hm saare nodes ko store kar rahe taaki baad me searching me logn time hi lage
//2. hm graph ka adjacency list bana rahe through 2d vector, jisme jo mera index hai wo node ko represent kar raha hai aur  aur uske andar jo bhi elements hai wo uss node se connected hai ,.......... just like below..
// 0 | |
// 1 |2| |4|
// 2 |1| |3| |4|
// 3 |2|
// 4 |2| |1|

//3. ab hamaare paas graph store ho chuka hai to hm ek helper function dfs ko call krenge, dfs function me ye horaha hai ki wo ek ek node jo ki connected hai waha jaa kar uss node ko ek set me insert kr dega , jab saara node visited ho jaayga to dfs return ho jayga aur mere paas ek set hoga jisme ki 1 se jitna bhi node connected hai wo sab mere paas hoga

//4. ab hm ik ik karke iss set ka element nikaalenge aur wo map me dekhenge usse related distance aur ek minimum value update krte jaayenge 

//5.fir isi minimum value ko return kar denge

    set<int> s;
    void dfs(int root,vector<vector<int>>& graph,vector<int>& visited){

        if(visited[root]==1)
            return;

        visited[root]=1;
        for(auto x:graph[root]){
            if(visited[x]==0){
                s.insert(x);
                dfs(x,graph,visited);
            }
        }
        return;
    }


    int minScore(int n, vector<vector<int>>& roads) {

        
        map<pair<int,int>,int> mp;
        //storing all the nodes and distances in map like this .
        // 1,2 -> 9
        // 2,3 -> 6
        // 2,4 -> 5 etc
        for(auto x:roads){
            mp[{min(x[0],x[1]),max(x[0],x[1])}]=x[2];
        }
        // ab graph create kar rhe hai

        vector<vector<int>> graph(n+1);
        for(auto x:roads){
            graph[x[0]].push_back(x[1]);
            graph[x[1]].push_back(x[0]);
        }
        vector<int> visited(n+1,0);
        dfs(1,graph,visited);

        // now checking for distance value of the nodes in set from the map

        int minm=INT_MAX;
        for(auto x:mp){
            if(s.find(x.first.first)!=s.end()||s.find(x.first.second)!=s.end()){
                minm=min(minm,x.second);
            }

        }

        return minm;




        
    }
};