//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int lowerBound(vector<int>arr,int target){
        int low=0,high=arr.size()-1;
        int ans=0;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]>=target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    int longestSubsequence(int n, int a[])
    {
       // your code here
       
       // 3 4 6 9 11   
       vector<int> temp;
       temp.push_back(a[0]);
       int size=1;
       
       for(int i=1;i<n;i++){
           if(a[i]>temp.back()){
               temp.push_back(a[i]);
               size++;
           }
           else{
               int index=lowerBound(temp,a[i]);
               temp[index]=a[i];
           }
       }
       return size;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends