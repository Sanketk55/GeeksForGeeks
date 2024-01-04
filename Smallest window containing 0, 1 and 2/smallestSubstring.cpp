// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string S) {
        // Code here
        int zeroInd=-1,oneInd=-1,twoInd=-1,ans=INT_MAX;
        
        for(int i=0;i<S.length();i++){
            
            switch(S[i]){
                
                case '0':zeroInd=i;
                         break;
                case '1':oneInd=i;
                         break;
                case '2':twoInd=i;
                         break;
            }
            
            if(zeroInd!=-1 && oneInd!=-1 && twoInd!=-1){
                int mini=min({zeroInd,oneInd,twoInd});
                int maxi=max({zeroInd,oneInd,twoInd});
                
                ans=min(ans,maxi-mini+1);
            }
        }
        return ans==INT_MAX ? -1 : ans;
    }
};