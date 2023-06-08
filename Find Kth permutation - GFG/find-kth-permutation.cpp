//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string kthPermutation(int n, int k)
    {
        // code here
        // vector<string>v;
        int num=0;
        for(int i=1;i<=n;i++){
            num=num*10+i;
        }
        string s=to_string(num);
        
        int i=0;
        string temp="";
        do{
             temp=s;
            i++;
            if(i==k) break;
        }
        while(next_permutation(s.begin(),s.end()));

        
        return temp;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        Solution ob;
        string ans = ob.kthPermutation(n, k);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends