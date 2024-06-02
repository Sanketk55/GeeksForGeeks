class Solution {
  public:
    int recursion(int day, int last, vector<vector<int>> &points, vector<vector<int>> &dp){
        if(day == 0){
            int maxi = 0;
            for(int task = 0; task < 3; task++){
                if(task != last) maxi = max(maxi, points[day][task]);
            }
            return maxi;
        }
        if(dp[day][last] != -1) return dp[day][last];
        int maxi = 0;
        for(int task = 0; task < 3; task++){
            if(task != last){
                int point = points[day][task] + recursion(day-1, task, points, dp);
                maxi = max(maxi, point);
            }

        }
        return dp[day][last] = maxi;
        
    }
    int maximumPoints(vector<vector<int>>& points, int n) {
        // Code here
        vector<vector<int>> dp(n, vector<int>(4, -1));
        return recursion(n-1, 3, points, dp);
    }
};