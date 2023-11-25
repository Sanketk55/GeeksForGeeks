class Solution{
	
	
	
	public:
	void shuffleArray(int arr[],int n)
	{
	    // Your code goes here
	    if(n<4){ 
	        return;
	    }
	    int x=10000;
	    
	    for(int i=0;i<n/2;i++){
	        arr[i]=arr[i]+arr[n/2+i]*x;
	    }
	    int j=n-1;
	    for(int m=n/2 - 1;m>=0;m--){
	        arr[j]=arr[m]/x;
	        arr[j-1]=arr[m]%x;
	        
	        j=j-2;
	    }

	     
	}
		 

};