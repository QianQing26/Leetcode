class Solution {
public:
    bool isAnagram(string s, string t) {
        int cnt[26];
        memset(cnt,0,sizeof(cnt));
        for(int i=0;i<s.length();i++){
            cnt[(int)(s[i]-'a')]++;
        }
        for(int i=0;i<t.length();i++){
            cnt[(int)(t[i]-'a')]--;
        }
        for(int i=0;i<26;i++){
            if(cnt[i])
                return false;
        }
        return true;
    }
};