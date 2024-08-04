

class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    static bool compare(const pair<int, int> &a, const pair<int, int> &b){
        return a.second < b.second;
    }
    int maxMeetings(int n, int start[], int end[]) {
        // Your code here
        vector<pair<int, int>> meetings;
        for(int i=0;i<n;i++){
            meetings.push_back({start[i], end[i]});
        }
        sort(meetings.begin(), meetings.end(), compare);
        
        int freeTime = meetings[0].second;
        int cnt = 1 ;
        
        for(int i=1;i<n;i++){
            if(meetings[i].first > freeTime){
                cnt++;
                freeTime = meetings[i].second;
            }
        }
        return cnt;
    }
};