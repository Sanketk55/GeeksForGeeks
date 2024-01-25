class Solution
{
    private:
    
    int help(int nums[], int ind, vector<int> &dp){
        if(ind==0) return nums[ind];
        if(ind<0) return 0;
         
        if(dp[ind]!=-1) return dp[ind];
        int pick = nums[ind] + help(nums,ind-2,dp);
        int notPick = 0+ help(nums,ind-1,dp);  
        return dp[ind]=max(pick, notPick);

    }
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        vector<int> dp(n,-1);
        return help(arr,n-1,dp);
    }
};