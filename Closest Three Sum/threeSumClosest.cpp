/ User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        sort(arr.begin(), arr.end());
        int diff = INT_MAX;
        int n = arr.size();
        int cloSum;
        
        for(int i = 0; i < n; i++){
            int j = i + 1;
            int k = n-1;
            
            while(j<k){
                int sum = arr[i] + arr[j] + arr[k];
                int d = abs(sum - target);
                if(d < diff){
                    diff = d;
                    cloSum = sum;
                }
                else if (d == diff){
                    cloSum = max(cloSum, sum);
                }
                
                if(sum < target) j++;
                else if (sum == target) return sum;
                else k--;
            }
        }
        return cloSum;
    }
};