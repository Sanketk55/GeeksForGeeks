

class Solution{
    
private:

    void merge(int low, int mid, int high, vector<int> &arr, int &cnt) {
        vector<int> temp; 
        int left = low;      
        int right = mid + 1;  
    
    
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            }
            else {
                temp.push_back(arr[right]);
                cnt += mid - left+1;
                right++;
            }
        }
    
        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }
    
        while (right <= high) {
            temp.push_back(arr[right]);
            right++;
        }
    
        for (int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }
    }
        
    void divide(int left, int right, vector<int> &nums, int &cnt){
        if(left < right){
            int mid = left + (right-left)/2;
            divide(left, mid, nums, cnt);
            divide(mid+1, right, nums, cnt);
            merge(left, mid, right, nums, cnt);
        }

    }
    public:
    int countPairs(int arr[] , int n ) 
    {
        // Your code goes here 
        vector<int> nums;
        int cnt = 0;
        for(int i=0;i<n;i++){
            nums.push_back(i*arr[i]);
        }
        divide(0, n-1, nums, cnt);
        
        return cnt;
    }
};