class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count=0;
	    if(k < 0) return count;
	 
	    unordered_map<int, int> mp;
	    for(auto ele : nums) mp[ele]++;
	    
	    for(auto i : mp){
	        if((k==0 && i.second > 1) || (k && mp.count(i.first + k))) count++;
	    }

	    return count;
    }
};