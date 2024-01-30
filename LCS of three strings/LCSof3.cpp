class Solution
{
    private:
    
        int function(string A, string B, string C,int i, int j, int k, vector<vector<vector<int>>> &dp){
            if(i==A.size() || j==B.size() || k==C.size()){
                return 0;
            }
            if(dp[i][j][k]!=-1){
                return dp[i][j][k];
            }
            
            if(A[i]==B[j] && A[i]==C[k]) return dp[i][j][k] = 1 + function(A, B, C, i+1, j+1, k+1, dp);
            
            int a = function(A, B, C, i+1, j, k, dp);
            int b = function(A, B, C, i, j+1, k, dp);
            int c = function(A, B, C, i, j, k+1, dp);
            
            return dp[i][j][k] = max({a,b,c});
        }
    public:

        int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
        {
            // your code here
            vector<vector<vector<int>>> dp(n1, vector<vector<int>>(n2, vector<int>(n3, -1)));
            return function(A,  B,  C, 0, 0, 0, dp);
        }
};