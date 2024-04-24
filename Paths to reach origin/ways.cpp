//User function Template for C++
class Solution
{
    
public:
    const int mod = 1e9 + 7;
    int rec(int x, int y, vector<vector<int>> &dp){
        if(x == 0 && y == 0) return 1;
        if(x < 0 || y < 0 ) return 0;
        
        if(dp[x][y] != -1) return dp[x][y];
        
        int left = rec(x-1, y, dp);
        int up  = rec(x, y-1, dp);
        return dp[x][y] = (left + up) % mod ;
        
    }
    int ways(int x, int y)
    {
        //code here.
        vector<vector<int>> dp(x+1, vector<int>(y+1, -1));
        return rec(x, y, dp);
        // return 0;
    }
};