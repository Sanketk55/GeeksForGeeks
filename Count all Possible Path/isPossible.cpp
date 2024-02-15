
class Solution {
public:
	int isPossible(vector<vector<int>>paths){
	    // Code here
	    for(int i=0;i<paths.size();i++){
	        int cnt=0;
	        for(int j=0;j<paths[0].size();j++){
	            if(paths[i][j]){
	                cnt++;
	            }
	        }
	        if(cnt%2) return 0;
	    }
	    return 1;
	}

};