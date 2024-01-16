 User function Template for C++

class Solution{
public
    int numberSequence(int m, int n){
         code here

        if(mn) return 0;
        if(n==0) return 1;
        
        return numberSequence(m-1,n) + numberSequence(m2,n-1);
    }
};