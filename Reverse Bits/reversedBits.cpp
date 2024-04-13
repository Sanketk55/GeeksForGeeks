class Solution {
  public:
    long long reversedBits(long long x) {
        // code here
        long long ans = 0;
        int i = 31;
        
        while(x){
            ans += (long long)pow(2,i)*(x&1);
            i--;
            x>>=1;
        }
        return ans;
    }
};