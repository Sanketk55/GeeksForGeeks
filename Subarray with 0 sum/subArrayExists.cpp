class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        int sum=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            
            if(mp.find(sum)!=mp.end()){
                return true;
            }
            mp[sum]++;
        }
        return false;
    }
};