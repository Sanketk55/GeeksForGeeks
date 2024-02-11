// User function Template for C++

class Solution{
public:
    vector<int> recamanSequence(int n){
        // code here
        unordered_map<int, int> freq;
        freq[0] =1;
        vector<int> sequence(n);
        sequence[0] = 0;
        
        for(int i=1; i<n; i++){
            if(sequence[i-1] - i > 0 && !freq[sequence[i-1] - i]){
                sequence[i] = sequence[i-1] - i;
            }
            else{
                sequence[i] = sequence[i-1] + i;
            }
            freq[sequence[i]] = 1;
            
        }
        return sequence;
    }
};