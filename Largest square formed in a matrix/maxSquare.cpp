class Solution {
  public:
    int solve(int i, int j, int n, int m, int &maxi, vector<vector<int>> &mat, vector<vector<int>> &dp){
        if(i >= n || j >= m) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        int right = solve(i, j+1, n, m, maxi, mat, dp);
        int diagonal = solve(i+1, j+1, n, m, maxi, mat, dp);
        int down = solve(i+1, j, n, m, maxi, mat, dp);
        if(mat[i][j] == 1){
            dp[i][j] = 1 + min({right, diagonal, down});
            maxi = max(maxi, dp[i][j]);
            return dp[i][j];
        }
        else return dp[i][j] = 0;
    }
    int maxSquare(int n, int m, vector<vector<int>> mat) {
        // code here
        int maxi = 0;
        vector<vector<int>> dp (n, vector<int>(m, -1));
        solve(0, 0, n, m, maxi, mat, dp);
        return maxi;
        
    }
};