class Solution {
  public:
    // l and r are input array
    // maxx : maximum in r[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in l[] and r[]
    // Function to find the maximum occurred integer in all ranges.
    int maxOccured(int n, int l[], int r[], int maxx) {

        // Your code here
        vector<int> hash(maxx+2, 0);
        
        for(int i=0;i<n;i++){
            hash[l[i]]++;
            hash[r[i]+1]--;
        }
        int sum = hash[0], curSum=0, common = 0;
        for(int i=1;i<hash.size();i++){
            curSum += hash[i];
            if(curSum > sum){
                sum = curSum;
                common = i;
            }
        }
        return common;
        
        
    }
};