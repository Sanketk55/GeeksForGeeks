/*You are required to complete this method */

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         //Your code here
         vector<int>ans;
         int n = mat.size();
         int row = 0, col = 0;
         bool isReversed = false;
         
         while(col < n){
             int i = row, j = col;
             vector<int>temp;
             while(i < n && i >= 0 && j < n && j >= 0){
                 temp.push_back(mat[i][j]);
                 i--;
                 j++;
             }
             if(isReversed){
                 reverse(temp.begin(), temp.end());
             }
             ans.insert(ans.end(), temp.begin(), temp.end());
             isReversed = !isReversed;
             
             if(row != n-1){
                 row ++;
                 col =0;
             }
             else{
                 col++;
             }
         }
         return ans;
    }
};