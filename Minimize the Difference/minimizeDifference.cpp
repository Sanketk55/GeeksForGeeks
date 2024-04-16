
class Solution {
  public:
    int minimizeDifference(int n, int k, vector<int> &arr) {
        // code here
        vector<int> rightMax(n,0), rightMin(n,0);
        rightMax[n-1] = arr[n-1];
        rightMin[n-1] = arr[n-1];
        
        for(int i=n-2;i>=0;i--){
            rightMax[i] = max(rightMax[i+1], arr[i]);
            rightMin[i] = min(rightMin[i+1], arr[i]);
        }
        
        int i = 0, j = k-1, minDiff=INT_MAX, lMax=INT_MIN, lMin=INT_MAX;
        
        while(j<n){
            if(i!=0){
                lMax = max(lMax, arr[i-1]);
                lMin = min(lMin, arr[i-1]);
            }
            int rMax=lMax, rMin=lMin;
            if(j!=n-1){
                rMax = max(rMax, rightMax[j+1]);
                rMin = min(rMin, rightMin[j+1]);
            }
            minDiff = min(minDiff, abs(rMax-rMin));
            
            j++;
            i++;
            
        }
        
        return minDiff;
        
        
    }
};