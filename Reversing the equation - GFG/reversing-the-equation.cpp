//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            stack<string>st;
            string temp="";
            for(auto i:s)
            {
                if(i=='-'||i=='+'||i=='*'||i=='/')
                {
                    st.push(temp);
                    temp=i;
                    st.push(temp);
                    temp="";
                    continue;
                }
                temp+=i;
            }
            st.push(temp);
            s.clear();
            
            while(!st.empty())
            {
               s+=st.top();
                st.pop();
            }
            return s;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends