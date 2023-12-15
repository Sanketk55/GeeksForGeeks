class Solution{
	public:
		int nthPoint(int n){
		    // Code here
		    long long int a=1,b=1,c;
		    
		    const long long mod=1e9+7;
		    for(int i=1;i<n;i++){
		        c=(a+b)%mod;
		        a=b;
		        b=c;
		    }
		    return b;
		}
};