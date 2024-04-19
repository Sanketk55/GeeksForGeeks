class Solution{
	
	
	public:
	vector<int> findMissing(int a[], int b[], int n, int m) 
	{ 
	    // Your code goes here
	    unordered_set<int> st;
	    vector<int> misEle;
	    for(int i = 0; i < m ;i++){
	        st.insert(b[i]);
	    }
	    for(int i = 0; i < n ;i++){
	       // st.insert(b[i]);
	       if(st.find(a[i]) == st.end()){
	           misEle.push_back(a[i]);
	       }
	    }
	    return misEle;

	} 
};
	