//User function template for C++
class Solution{
private:
    void merge(int left, int mid, int right, vector<pair<int, int>> &v, vector<int> &ans){
        int low = left;
        int high = mid+1;
        vector<pair<int, int>> t;

        while(low <= mid && high <= right){
            if(v[low].first > v[high].first){
                ans[v[low].second] += (right - high +1);
                t.push_back(v[low++]);
            }
            else{
                t.push_back(v[high++]);
            }
        }
        while(low <=  mid){
            t.push_back(v[low++]);
        }
        while(high <=  right){
            t.push_back(v[high++]);
        }

        for(int i = left; i<=right;i++){
            v[i]=t[i-left];
        }
    }

    void divide(int left, int right, vector<pair<int, int>> &v, vector<int> &ans){
        if(left < right){
            int mid = left + (right - left)/2;
            divide(left, mid, v, ans);
            divide(mid+1, right, v, ans);
            merge(left, mid, right, v, ans);
        }
    }
    
public:	
	vector<int> constructLowerArray(int *arr, int n) {
	    // code here
	    vector<pair<int, int>> v;
        // int n = nums.size();
        for(int i=0;i<n;i++){
            v.push_back({arr[i], i});
        }
        vector<int> ans(n, 0);

        divide(0, n-1, v, ans);
        return ans;
	}
};