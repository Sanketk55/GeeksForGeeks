class Solution{
    public:
    int min_sprinklers(int gallery[], int n)
    {
        // code here
        vector<int>plant(n,-1);
        
        for(int i=0;i<n;i++){
            if(gallery[i]!=-1){
                int mini=max(0,i-gallery[i]);
                int maxi=min(n-1,i+gallery[i]);
                
                for(int j=mini;j<=maxi;j++){
                    plant[j]=max(plant[j],maxi);
                }
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(plant[i]==-1) return -1;
            if(i<=plant[i]){
                count++;
                i=plant[i];
            }
        }
        return count;
    }
};