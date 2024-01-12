// User function Template for C++

class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        int size=q.size();
        stack<int>st;
        
        for(int i=0;i<k;i++){
            st.push(q.front());
            q.pop();
        }
        
        while(st.size()){
            q.push(st.top());
            st.pop();
        }
        
        for(int i=k;i<size;i++){
            q.push(q.front());
            q.pop();
        }
        return q;
    }
};