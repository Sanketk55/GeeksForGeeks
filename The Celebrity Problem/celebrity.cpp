// User function Template for Java

class Solution {
    // Function to find if there is a celebrity in the party or not.
    public int celebrity(int mat[][]) {
        // code here
        int n = mat.length;
        int row;
        int cel = -1;
        
        for(int col = 0; col<n; col++){
            int cnt = 0;
            for(row = 0; row<n; row++){
                if(mat[row][col] == 1 || row == col) cnt++;
                else break;
            }
            if(cnt == n){
                boolean flag = true;
                int tCol = 0;
                while(tCol<n){
                    if(mat[col][tCol] == 1){
                        flag = false;
                        break;
                    }
                    tCol++;
                }
                if(flag == true) return col;
            }
        }
        return cel;
        
        
    }
}