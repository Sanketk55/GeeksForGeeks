
class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        // code here
        if(q > 2*n || q < 2) return 0;
        else if(q<=n) return q-1;
        long long diff = q-n;
        return n-diff+1;
    }
};