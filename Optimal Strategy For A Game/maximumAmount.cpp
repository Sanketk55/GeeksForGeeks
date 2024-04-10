
//Function to find the maximum possible amount of money we can win.
class Solution{
    public:
    long long rec(int left, int right, int arr[], vector<vector<long long>> &dp){
        if(left > right) return 0;
        
        if(dp[left][right]!=-1){
            return dp[left][right];
        }
        
        int a = arr[left], b = arr[right];
        a += min(rec(left+2, right, arr, dp), rec(left+1, right-1, arr, dp));
        b += min(rec(left+1, right-1, arr, dp), rec(left, right-2, arr, dp));
        
        return dp[left][right] = max(a,b);
        
    }
    long long maximumAmount(int n, int arr[]){
        // Your code here
        vector<vector<long long>> dp(n, vector<long long>(n, -1));
        return rec(0, n-1, arr, dp);
    }
};