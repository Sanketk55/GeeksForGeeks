class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        unordered_map<int,int>freq;
        
        for(int i=0;i<nums.size();i++){
            int cur=nums[i]%k;
            int need=(k-cur)%k;
            if(freq.count(need)){
                --freq[need];
                
                if(freq[need]==0){
                    freq.erase(need);
                }
            }
            else{
                ++freq[cur];
            }
        }
        return freq.size()==0;
    }
};