//User function Template for C++

class Solution{
public:
    long long sequence(int n){
        // code here
        long long  temp=2, result=1, mod = 1e9+7;
        int i = 2;
        while(i<=n){
            int j=i;
            long long curr = 1;
            while(j--){
                curr*=temp;
                curr%=mod;
                temp++;
            }
            result+=curr;
            result%=mod;
            i++;
        }

        return result;
    }
};