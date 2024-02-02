User function template for C++

class Solution{
  public
    You are required to complete this method 
    int atoi(string s) {
        Your code here
        int num=0;
        
        for(int i=0;is.length();i++){
            if(i==0 && s[i]=='-') continue;
            if(s[i]='0' && s[i]='9'){
                num = num  10 + (s[i]-'0');
            }
            else return -1;
        }
        if(s[0]=='-') num=-1;
        return num;
    }
};