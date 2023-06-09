//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string>uniq_per;
		    
		    sort(S.begin(),S.end());
		    
		    do{
		        uniq_per.push_back(S);
		    }
		    while(next_permutation(S.begin(),S.end()));
		    
		    sort(uniq_per.begin(),uniq_per.end());
		    
		    return uniq_per;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends