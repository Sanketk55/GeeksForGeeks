//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    
    void findCombination(int index,int target,vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans){
        if(index==arr.size()){
            if(target==0){
                // sort(ds.begin(),ds.end());
                ans.push_back(ds);
            }
            return;
        }
        if(arr[index] <= target){
            ds.push_back(arr[index]);
            findCombination(index,target-arr[index],arr,ds,ans);
            ds.pop_back();
        }
        while(index+1<arr.size() && arr[index]==arr[index+1]){index++;}
        findCombination(index+1,target,arr,ds,ans);
    }
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        // Your code here
        vector<vector<int>>ans;
        vector<int>ds;
        sort(A.begin(),A.end());
        findCombination(0,B,A,ds,ans);
        
        // sort(ans.begin(),ans.end());
        return ans;
    }
};