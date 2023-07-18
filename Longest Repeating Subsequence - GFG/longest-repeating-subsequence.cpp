//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    vector<vector<int>>dp(str.length()+1,vector<int>(str.length()+1));
		    for(int i=str.length();i>=0;i--){
		        
		        for(int j=str.length();j>=0;j--){
		            
		            if(i==str.length() or j==str.length()) dp[i][j]=0;
		            else if(str[i]==str[j] and i!=j){
		                dp[i][j]=1+dp[i+1][j+1];
		            }
		            else{
		                dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
		            }
		            
		        }
		    }
		    return dp[0][0];
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends