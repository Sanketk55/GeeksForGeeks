//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            //code here.
            d=d%16;
            vector<int>ans;
            int a=(n<<d | n>>(16-d))&65535;
            int b=(n>>d | n<<(16-d))&65535;
            
            ans.push_back(a);
            ans.push_back(b);
            
            return ans;
            
            
            
            
        }
};


//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends