//User function template for C++
class Solution{
public:
	
	long long sumBitDifferences(int arr[], int n) {
	    // code here
	    long long ans = 0, yes=0,no=0,num=1; 
	    for(int i=0; i<21 ;i++){
	        for(int j=0;j<n;j++){
	            if(arr[j]&num){
	                yes++;
	            }
	            else{
	                no++;
	            }
	        }
	        ans+=2*yes*no;
	        num<<=1;
	        yes=0;
	        no=0;
	    }
	    return ans;
	}
};