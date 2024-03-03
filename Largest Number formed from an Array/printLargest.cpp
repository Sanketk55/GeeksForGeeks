//User function template for C++
class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	static bool compare(string a, string b){
	    return a+b > b+a;
	} 
	string printLargest(int n, vector<string> &arr) {
	    // code here
	    string number ="";
	    sort(arr.begin(), arr.end(), compare);
	    for(auto s : arr){
	        number += s;
	    }
	    return number;
	}
};