//User function Template for C++

class Solution
{   
    public:
    vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
        // Your code here
        set<vector<int>>s;
        vector<int>ans;
        int cnt=0;
        
        for(auto v:matrix){
            if(s.find(v)!=s.end()){
                ans.push_back(cnt);
            }
            else{
                s.insert(v);
            }
            cnt++;
        }
        return ans;
      
    } 
};