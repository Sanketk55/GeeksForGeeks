class Solution {

  public:
    int findSwapValues(int a[], int n, int b[], int m) {
        // Your code goes here
        int sum1 = accumulate(a, a+n, 0);
        int sum2 = accumulate(b, b+m, 0);
        
        if((sum1 - sum2)%2 !=0 ) return -1;
        sort(a, a+n);
        sort(b, b+m);
        
        int temp = (sum1 - sum2)/2;
        int left = 0, right =0;
        
        while(left < n && right < m){
            int cur = a[left] - b[right];
            if(cur == temp) return 1;
            else if(cur < temp) left++;
            else right ++;
        }
        
        return -1;
        
    }
};