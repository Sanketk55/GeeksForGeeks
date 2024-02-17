
class Solution{
    public:
    bool isMaxHeap(int arr[], int n)
    {
        // Your code goes here
        if(n == 1) return true;
        int index;
        
        for(int i = n-1; i >= 1; i--){
            i%2 == 0 ? index = (i/2) - 1 : index = i/2;
            if(arr[i] > arr[index]){
                return false;
            }
        }
        
        return true;
    }
};