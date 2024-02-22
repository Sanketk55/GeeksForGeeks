class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
        unordered_set<int> s;
        int longest = 0;
        
        for(int i=0; i<N; i++){
            s.insert(arr[i]);
        }
        
        for(auto it : s){
            if(s.find(it - 1) == s.end()){
                int cnt =1;
                int ele = it;
                
                while(s.find(ele+1) != s.end()){
                    ele++;
                    cnt++;
                }
                longest = max(longest, cnt);
            }
        }
        return longest;
    }
};