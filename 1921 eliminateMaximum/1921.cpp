class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n=dist.size();
        vector<int>count(n,0);
        for(int i=0;i<n;i++){
            int Time=(dist[i]-1)/speed[i];
            if(Time<n)
                count[Time]++;
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt++;
            cnt-=count[i];
            if(cnt<0)
            return i+1;
        }
        return n;
    }
};