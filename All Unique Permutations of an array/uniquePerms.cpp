//User function Template for C++

class Solution {
  public:
    void findPerms(vector<int> &arr, vector<int> &ds,vector<int> &freq, set<vector<int>>&s, vector<vector<int>> &ans){
        if(ds.size()==arr.size()){
            if(s.find(ds)==s.end()){
                ans.push_back(ds);
                s.insert(ds);
            }
            return; 
        }
        
        for(int i=0;i<arr.size();i++){
            if(freq[i]) continue;
            
            freq[i]=1;
            ds.push_back(arr[i]);
            findPerms(arr, ds, freq, s, ans);
            freq[i]=0;
            ds.pop_back();
        }
    }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        vector<vector<int>> ans;
        set<vector<int>>s;
        vector<int>ds;
        vector<int>freq(arr.size(),0);
        
        sort(arr.begin(),arr.end());
        findPerms(arr,ds,freq,s,ans);
        return ans;
    }
};