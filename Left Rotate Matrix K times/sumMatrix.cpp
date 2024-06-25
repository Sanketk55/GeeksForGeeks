// User function Template for C++

class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        if(k%m == 0) return mat;
        k = k%m;
        
        for(auto& row : mat){
            reverse(row.begin(), row.begin() + k);
            reverse(row.begin() + k, row.end());
            reverse(row.begin(), row.end());

        }
        return mat;
    }
};