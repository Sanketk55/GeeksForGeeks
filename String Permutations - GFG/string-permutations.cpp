//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void help(int indx,vector<string>&ans,string S){
        if(indx==S.length()){
            ans.push_back(S);
            return;
        }
        for(int i=indx;i<S.length();i++){
            swap(S[indx],S[i]);
            help(indx+1,ans,S);
            swap(S[indx],S[i]);
        }
    }
    vector<string> permutation(string S)
    {
        //Your code here
        vector<string>ans;
        help(0,ans,S);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends