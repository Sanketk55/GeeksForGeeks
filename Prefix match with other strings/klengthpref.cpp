//User function Template for C++

class Solution{
private:
    bool isMatch(int k, string cur, string str){
        for(int i=0;i<k;i++){
            if(str[i]==cur[i]) continue;
            else return false;
        }
        return true;
    }
public:
    int klengthpref(string arr[], int n, int k, string str){    
        
        if(k > str.length()) return 0;
        
        int count = 0;
        for(int i=0;i<n;i++){
            if(isMatch(k, arr[i], str)) count++;
        }
        return count;
    }
};