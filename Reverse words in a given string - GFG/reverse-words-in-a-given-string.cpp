//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        vector<string>v;
        S+='.';
        string word,ans;
        int i=0;
        int n=S.length();
        
        while(i<n){
            if(S[i]=='.'){
                v.push_back(word);
                word.clear();
            }
            else{
                word+=S[i];
            }
            i++;
        }
        while(v.size()){
            ans+=v.back();
            ans+='.';
            v.pop_back();
        }


        return ans.substr(0,n-1);
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends