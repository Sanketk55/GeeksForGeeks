
class Solution {
  public:
    vector<int> constructList(int q, vector<vector<int>> &queries) {
        // code here
        vector<int> list;
        int qSize = queries.size();
        int zor = 0;

        for(int i = qSize-1;i >= 0;i--){
            if(queries[i][0]==0){
                int num = zor xor queries[i][1];
                list.push_back(num);
            }
            else{
                zor = zor xor queries[i][1];
            }
        }
        list.push_back(0 xor zor);
        
        sort(list.begin(), list.end());
        return list;
    }
};