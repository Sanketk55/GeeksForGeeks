//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
      int l=0,r=n-1,mid=0;
	  while(l<=r){
	      mid=l+(r-l)/2;
	      if(arr[mid]==x) break;
	      else if(arr[mid]>x) r=mid-1;
	      else l=mid+1;
	  }
	  if(arr[mid]==x && l==r){
	      return 1;
	  }
	  else if(l<r){
	      while(l<=r){
	          if(arr[l]==x && arr[r]==x){
	              return r-l+1;
	          }
	          if(arr[l]!=x){
	              l++;
	          }
	          if(arr[r]!=x){
	              r--;
	          }
	          
	      }
	  }
	  return 0;
	        
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends