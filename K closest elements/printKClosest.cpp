// User function template for C++

class Solution {
  private:
    int findClosestIndex(vector<int> arr, int x){
        int left = 0;
        int right = arr.size()-1;
        int mid = 0;
        int min_ind, pre_dif = INT_MAX;
        
        
        while(left <= right){
            mid = left + (right - left)/2;
            if(abs(arr[mid] - x) < pre_dif){
                pre_dif = abs(arr[mid] - x);
                min_ind = mid;
                // cout<<min_ind<<" ";
            }
            
            if(arr[mid] < x){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return min_ind;
    }
  public:
    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
        // code here
        int left = findClosestIndex(arr, x);
        int right = left + 1;
        if(arr[left] == x) left--;
        vector<int> ans;
        
        while(left >= 0 && right < n && k){
            if(abs(arr[left] - x) < abs(arr[right] - x)){
                ans.push_back(arr[left--]);
            }
            else{
                ans.push_back(arr[right++]);
            }
            k--;
        }
        while(left >= 0 && k){
            ans.push_back(arr[left--]);
            k--;
        }
        while(right < n && k){
            ans.push_back(arr[right++]);
            k--;
        }
        return ans;
        // return {left};
        
    }
};