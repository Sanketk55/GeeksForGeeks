// #define ll long long
class Solution{
public:
    vector<long long> nthRowOfPascalTriangle(int n) {
        // code here
        vector<vector<long long>>ans(n);
        int mod=1e9 + 7;
        for(int i=0;i<n;i++) {
            ans[i].resize(i+1);
            ans[i][0] = ans[i][i] = 1;
            
            for(int j=1;j<i;j++) {
                ans[i][j] = (ans[i-1][j-1] + ans[i-1][j])%mod;
            }
        }
        return ans[n-1];
    }
};