//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        vector<bool>hash(26, false);
        int index=0;
        
        for(int i=0;i<s.length();i++){
            
            if(s[i]>='A' && s[i]<='Z'){
                index = s[i] - 'A';
            }
            else if(s[i]>='a' && s[i]<='z'){
                index = s[i] -'a';
            }
            else{
                continue;
            }
            hash[index]=true;
        }
        for(int i=0;i<26;i++){
            if(!hash[i]) return false;
        }
        
        return true;
    }

};

// TC --> 26*|S|