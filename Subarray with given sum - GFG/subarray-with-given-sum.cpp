//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        vector<int>ans;
        int left=0,right=0,maxLen=0;
        int sum=arr[0];
        int leftIdx=0,rightIdx=0;
        
        while(right<n){
            while(sum > s && left<=right){
                sum-=arr[left];
                left++;
            }
            if(sum==s){
                if (right-left+1 > maxLen){
                    maxLen=right-left+1;
                    leftIdx=left+1;
                    rightIdx=right+1;
                    break;
                }
            }
            right++;
            if(right<n) sum+=arr[right];
        }
        if(leftIdx > 0){
            ans.push_back(leftIdx);
            ans.push_back(rightIdx);
            return ans;
        }
        ans.push_back(-1);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends