//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countFractions(int n, int numerator[], int denominator[])
    {
        map<pair<int,int>,int>mp;
        int pairs=0;
        
        for(int i=0;i<n;i++){
            int gcd=__gcd(numerator[i],denominator[i]);
            
            numerator[i]/=gcd;
            denominator[i]/=gcd;
            
            int x=numerator[i];
            int y=denominator[i];
            int z=y-x;
            
            if(mp.count({z , y})){
                pairs+=mp[{z , y}];
            }
            ++mp[{numerator[i],denominator[i]}];
            
        }
        return pairs;
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
        cin>>n;
        int numerator[n],denominator[n];
        for(int i=0;i<n;i++)
            cin>>numerator[i];
        for(int i=0;i<n;i++)
            cin>>denominator[i];
        Solution ob;
        int ans=ob.countFractions(n,numerator,denominator);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends