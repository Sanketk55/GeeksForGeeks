class Solution {
  private:
    int solve(int ind, vector<int>& height, vector<int>& dp){
        if(ind==0) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int jumpTwo = INT_MAX;
        int jumpOne= solve(ind-1, height,dp)+ abs(height[ind]-height[ind-1]);
        if(ind>1)
            jumpTwo = solve(ind-2, height,dp)+ abs(height[ind]-height[ind-2]);
        
        return dp[ind]=min(jumpOne, jumpTwo);
    }
    
  public:
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        vector<int> dp(n, -1);
        return solve(n-1, height, dp);
    }
};