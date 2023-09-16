//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  private:
    bool detectCycle(int src, vector<int>adj[], int visited[]){
        visited[src]=1;
        queue<pair<int,int>>q;
        q.push({src,-1});
        
        while(!q.empty()){
            int parent=q.front().second;
            int node=q.front().first;
            q.pop();
            
            for(auto neighbourNode:adj[node]){
                if(!visited[neighbourNode]){
                    visited[neighbourNode]=1;
                    q.push({neighbourNode,node});
                }
                else if(parent!=neighbourNode){
                    return true;
                }
            }
        }
        return false;
    }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        int visited[V]={0};
        
        for(int i=0;i<V;i++){
            if(!visited[i]){
                if(detectCycle(i,adj,visited)){
                    return true;
                }
            }
        }
        return false;
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends