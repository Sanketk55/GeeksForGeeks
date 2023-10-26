//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long pre=1,suf=1,maxProd=INT_MIN;
	    for(int i=0;i<n;i++){
	        if(pre==0) pre=1;
	        if(suf==0) suf=1;
	        
	        pre*=arr[i];
	        suf*=arr[n-i-1];
	        maxProd=max(maxProd,max(pre,suf));
	    }
	    return maxProd;
	}
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends