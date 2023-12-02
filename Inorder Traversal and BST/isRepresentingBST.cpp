//User function Template for C++

class Solution{
    public:
    int isRepresentingBST(int arr[], int N)
    {
        // code here
        int prev=arr[0];
        for(int i=1;i<N;i++){
            if(arr[i]>prev){
                prev=arr[i];
            }
            else{
                return 0;
            }
        }
        
        return 1;
    }
};