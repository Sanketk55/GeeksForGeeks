//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        vector<int> freq(26, 0);
        priority_queue<int>pq;
        int sum=0;
        
        for(int i=0;i<s.length();i++){
            freq[s[i]-97]++;
        }
        for(int i=0;i<26;i++){
            if(freq[i]!=0){
                pq.push(freq[i]);
            }
        }
        while(k--){
            int count = pq.top();
            pq.pop();
            count--;
            pq.push(count);
        }
        while(pq.size()){
            sum+=pq.top()*pq.top();
            pq.pop();
        }
        return sum;
    }
};