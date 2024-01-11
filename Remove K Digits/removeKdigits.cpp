// User function Template for C++

class Solution {
  public:
    string removeKdigits(string S, int K) {
        stack<int>st;
        
        for(int i=0;i<S.length();i++){
            while(!st.empty() && st.top() > S[i] && K>0){
                st.pop();
                K--;
            }
            if(!st.empty() || S[i]!='0') st.push(S[i]);
        }
        
        while(!st.empty() && K--){
            st.pop();
        }
        
        if(st.empty()) return "0";

        int n=S.size();
        
        while(!st.empty()){
            S[n-1]=st.top();
            st.pop();
            n--;
        }
        return S.substr(n);
        
        
        
    }
};