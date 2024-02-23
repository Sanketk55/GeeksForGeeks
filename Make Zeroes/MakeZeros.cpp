//User function Template for C++

class Solution {
private:
    bool isValid(int row, int col, int m, int n){
        if(row < 0 || row >= m || col < 0 || col >= n )
            return false;
        return true;
    }
public:
    void MakeZeros(vector<vector<int> >& matrix) {
        // Code here
        int drow[4] = {-1, 0, 1, 0};
        int dcol[4] = {0, 1, 0, -1};
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int> >temp(matrix);
        // vector<int> row(n, 0);
        // vector<int> col(m, 0);
        
        for(int i=0;i<m;i++){
            
            for(int j=0;j<n;j++){
                
                if(temp[i][j]==0){
                    int sum =0;
                    
                    for(int k=0;k<4;k++){
                        
                        int nrow = i + drow[k];
                        int ncol = j + dcol[k];
                        
                        if(isValid(nrow, ncol, m, n)){
                            sum+=temp[nrow][ncol];
                            matrix[nrow][ncol]=0;
                        }
                    }
                    matrix[i][j]=sum;
                }
            }
        }
        
    }
};