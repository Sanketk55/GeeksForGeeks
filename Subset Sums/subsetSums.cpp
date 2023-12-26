class Solution
{
public:
    void findsubsetSums(int ind,int N,int sum,vector<int>arr,vector<int> &ds){
        if(ind==N){
            ds.push_back(sum);
            return;
        }
        // picked Element 
        findsubsetSums(ind+1,N,sum+arr[ind],arr,ds);
        // not picked Element 
        findsubsetSums(ind+1,N,sum,arr,ds);
        
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>ds;
        findsubsetSums(0,N,0,arr,ds);
        sort(ds.begin(),ds.end());
        return ds;
    }
};