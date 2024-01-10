//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    int sum=0,ans=0;
	    int rem;
	    
	    unordered_map<int,int>mp;
	    mp[0]=-1;
	    
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	        rem=sum%k;
	        
	        if(rem<0){
	            rem+=k;
	        }
	        if(mp.find(rem)!=mp.end()){
	            ans=max(ans,i-mp[rem]);
	        }
	        else{
	            mp[rem]=i;
	        }
	        
	    }
	    return ans;
	}
};