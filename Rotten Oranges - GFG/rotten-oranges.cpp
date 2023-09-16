//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        int cntFresh=0;

        int visited[n][m];
        int dx[]={0, 1,-1,0};
        int dy[]={-1,0, 0,1};
        queue<pair<pair<int,int>,int>>q;

        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if(grid[row][col]==2){
                    q.push({{row,col},0});
                    visited[row][col]=2;
                }
                else{
                    visited[row][col]=0;
                }
                if(grid[row][col]==1){
                    cntFresh++;
                }
            }
        }
        int maxTime=0;
        int cnt=0;
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int tm=q.front().second;
            maxTime=max(maxTime,tm);

            q.pop();

            for(int i=0;i<4;i++){
                int nrow=r+dx[i];
                int ncol=c+dy[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]==1 && visited[nrow][ncol]!=2){
                    q.push({{nrow,ncol},tm+1});
                    visited[nrow][ncol]=2;
                    cnt++;
                }
            }
        }
        if(cntFresh!=cnt){
            return -1;
        }
        return maxTime;
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
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends