
class Solution {
  public:
    vector<long long> jugglerSequence(long long n) {
        // code here
        vector<long long> ans;
        
        while(n!=1){
            ans.push_back(n);
            if(n%2 == 1){
                n = pow(sqrt(n),3);
            }
            else{
                n = sqrt(n);
            }
        }
        ans.push_back(n);
        return ans;
    }
};