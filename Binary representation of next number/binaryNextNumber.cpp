class Solution {
  public:
    string binaryNextNumber(string s) {
        // code here.
        bool flag = false;
        
        while(s[0] == '0') s.erase(s.begin());
        
        for(int i=s.size()-1;i>=0 ; i--){
            if(s[i] == '0'){
                flag = true;
                s[i] = '1';
                break;
            }
            else{
                s[i] = '0';
            }
        }
        
        if(flag == false){
            s = '1'+s;
        }
        
        return s;
    }