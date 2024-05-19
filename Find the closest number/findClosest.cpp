
class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        // Complete the function
        int left = 0;
        int prev_dif = INT_MAX;
        int num = -1;
        int right = n-1;
        int mid = 0;
        
        while(left <= right){
            mid = left + (right-left)/2;
            
            if(abs(k - arr[mid]) < prev_dif){
                prev_dif = abs(k - arr[mid]);
                num = arr[mid];
                // num = max(num, arr[mid]);
                // if(num < arr[mid]) num = arr[mid];
                
            }
            if(abs(k - arr[mid]) == prev_dif) num = max(num, arr[mid]);
            if(arr[mid] < k) left = mid+1;
            else right = mid-1;
        }
        return num;
    } 
};