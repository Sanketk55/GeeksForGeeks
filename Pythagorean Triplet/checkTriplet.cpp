//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    // code here
	    int maxi = *max_element(arr, arr+n);
	    vector<int> hash(maxi+1, 0);
	    
	    for(int i=0;i<n;i++){
	        hash[arr[i]]++;
	    }
	    
	    for(int i=0;i<=maxi;i++){
	        for(int j=i+1;j<=maxi;j++){
	            if(hash[i]>0 && hash[j]>0){
	                long long sq = i*i + j*j;
	                int sqr = sqrt(sq);
	                if(sqr*sqr == sq && sqr<=maxi && hash[sqr]>0) return true;
	            }
	        }
	    }
	    return false;

	}
};