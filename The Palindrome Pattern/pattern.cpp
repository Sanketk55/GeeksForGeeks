class Solution {
  public:

    string pattern(vector<vector<int>> &arr) {
        // Code Here
        int n = arr.size();
        int m = arr[0].size();
        for(int row=0;row<n;row++){
            int start = 0, end = m-1;
            while(start <= end){
                if(arr[row][start] == arr[row][end]){
                    start++;
                    end--;
                }
                else break;
            }
            if(start >= end){
                string str = to_string(row) + " R";
                return str;
            }
        }
        for(int col=0;col<m;col++){
            int start = 0, end = n-1;
            while(start <= end){
                if(arr[start][col] == arr[end][col]){
                    start++;
                    end--;
                }
                else break;
            }
            if(start >= end){
                string str = to_string(col) + " C";
                return str;
            }
        }
        return "-1";
    }
};