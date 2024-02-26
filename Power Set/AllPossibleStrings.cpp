class Solution{
    private:
        void findAllSubSeq(int index, string s, string temp, vector<string> &subSeq){
            if(index == s.length()){
                if(temp.length()){
                    subSeq.push_back(temp);
                }
                return;
            }

            findAllSubSeq(index+1, s, temp, subSeq);
            temp+=s[index];
            findAllSubSeq(index+1, s, temp, subSeq);
        }
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    
		    vector<string> subSeq;
		    findAllSubSeq(0 , s, "", subSeq);
		    sort(subSeq.begin(), subSeq.end());
		    return subSeq;
		    
		}
};