//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int n=matrix.size();
        int m=matrix[0].size();
        
        int dx[]={0, 0,-1,1,-1,-1,1,1};
        int dy[]={-1,1 ,0, 0,-1,1,-1,1};
        
        auto isValid=[&](int x,int y)->bool{
            if(x<0 or x>=n or y<0 or y>=m){
                return 0;
            }
            return matrix[x][y]==0;
        };
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]){
                    int cnt=0;
                    for(int k=0;k<8;k++){
                        int x=i+dx[k];
                        int y=j+dy[k];
                        
                        cnt+=isValid(x,y);
                    }
                    if(cnt){
                        ans+=!(cnt&1);
                    }
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends