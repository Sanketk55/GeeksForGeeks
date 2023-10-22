//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution
{
    public:
    long long numberOfPaths(int m, int n) {
        long long mod = 1000000007;
        if (m == 1 || n == 1)
            return 1;
        long long res = 1;
        for (int i = n; i < m + n - 1; i++) {
            res = (res * i) % mod;
            res = (res * modInverse(i - n + 1, mod)) % mod;
        }
        return res;
    }

    long long modInverse(long long a, long long m) {
        long long m0 = m;
        long long y = 0, x = 1;

        if (m == 1)
            return 0;

        while (a > 1) {
            // q is quotient
            long long q = a / m;
            long long t = m;

            // m is remainder now, process
            // same as Euclid's algo
            m = a % m, a = t;
            t = y;

            // Update y and x
            y = x - q * y;
            x = t;
        }

        // Make x positive
        if (x < 0)
            x += m0;

        return x;
    }
};


//{ Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int N, M;
		cin>>M>>N;
		Solution ob;
	    cout << ob.numberOfPaths(M, N)<<endl;
	}
    return 0;
}
// } Driver Code Ends