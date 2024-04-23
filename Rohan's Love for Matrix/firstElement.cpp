class Solution {
  public:
    int firstElement(int n) {
        // code here
        int first = 1;
        int second = 1;
        
        const int mod = 1e9 + 7;
    
        
        for(int i = 3; i<=n; i++){

            int sum = (first + second) % mod;
            first = second;
            second = sum;
            
        }
        return second;
    }
};