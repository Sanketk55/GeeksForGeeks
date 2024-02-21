class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here 
        // ios_base :: sync_with_stdio(false);
        // std :: cin.tie(0);
        
        int window = 0, min_len = INT_MAX, left = 0;
        for(int right = 0; right < n; right++){
            window += arr[right];
            while(window > x){
                min_len = min(min_len, right - left+1);
                window -= arr[left++];
            }
        }
        return min_len == INT_MAX ? 0 : min_len;
    }
};