//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        vector<int>ans;
        int left=0,right=n-1;
        int mid;
        
        while(left<=right){
            mid=left+(right-left)/2;
            if(arr[mid]==x){
                break;
            }
            else if(arr[mid]>x){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
            
        }
        if(arr[mid]!=x){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        while(left<=right){
            if(arr[left]==x && arr[right]==x){
                break;
            }
            if(arr[left]!=x){
                left++;
            }
            if(arr[right]!=x){
                right--;
            }
            
        }
        ans.push_back(left);
        ans.push_back(right);
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
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends