//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    // Code here
	    int n=grid.size();
	    int m=grid[0].size();
	    
	    vector<vector<int>>visited(n,vector<int>(m,0));
	    vector<vector<int>>distance(n,vector<int>(m,0));
	    
	    int dx[]={0,0,1,-1};
	    int dy[]={1,-1,0,0};
	    queue<pair<pair<int,int>,int>>q;
	    
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(grid[i][j]==1){
	                visited[i][j]=1;
	                q.push({{i,j},0});
	            }
	        }
	    }
	    
	    while(!q.empty()){
	        int row=q.front().first.first;
	        int col=q.front().first.second;
	        int dist=q.front().second;
	        
	        distance[row][col]=dist;
	        
	        q.pop();
	        
	        for(int i=0;i<4;i++){
	            int nrow=row+dx[i];
	            int ncol=col+dy[i];
	            
	            if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && !visited[nrow][ncol]){
	                visited[nrow][ncol]=1;
	                q.push({{nrow,ncol},dist+1});
	            }
	        }
	    }
	    return distance;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends