//User function template for C++

class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        //code here
        long long int count=0,sum=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(mp.find(sum)!=mp.end()){
                count+=mp[sum];
            }
            
            mp[sum]++;

        }
        return count;
    }
};