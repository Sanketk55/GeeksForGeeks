//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    priority_queue<int>pq;
	    vector<int>largest_ele(k);
        for(int i=0;i<k;i++){
            pq.push(-(arr[i]));
        }
        for(int i=k;i<n;i++){
            if(-(arr[i]) < pq.top()){
                pq.pop();
                pq.push(-arr[i]);
            }
        }
        while(!pq.empty()){
            largest_ele[--k]=-pq.top();
            pq.pop();
            
        }
        return largest_ele;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends