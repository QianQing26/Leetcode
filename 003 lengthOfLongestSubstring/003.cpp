class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> win;
        int maxx=0;
        int left=0;
        for(int i=0;i<s.size();i++){
            while(win.find(s[i])!=win.end()){
                win.erase(s[left]);
                left++;
            }
            maxx=max(maxx,i-left+1);
            win.insert(s[i]);
        }
        return maxx;
    }
};