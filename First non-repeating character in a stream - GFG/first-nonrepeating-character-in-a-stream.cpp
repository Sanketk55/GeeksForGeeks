//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    string ans="";
		    queue<char>q;
		    unordered_map<char,int>mp;
		    for(auto i :A){
		        mp[i]++;
		        
		        if(mp[i]==1){
		            q.push(i);
		        }
		        
		        while(q.size()!=0 && mp[q.front()]>1){
		            q.pop();
		        }
		        if(q.size()==0){
		            ans+='#';
		        }
		        else{
		            ans+=q.front();
		        }
		        
		    }
		    return ans;
		        
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends