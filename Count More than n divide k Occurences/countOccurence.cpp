class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        unordered_map<int,int> mp;
        int cnt=0;
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto it:mp){
            if(it.second > n/k){
                cnt++;
            }
        }
        return cnt;
    }
};