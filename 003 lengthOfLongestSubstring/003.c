int lengthOfLongestSubstring(char * s){
    int hash[127]={0};
    int left=0;
    int right=0;
    int maxx=0;
    while(s[right]){
        if(hash[s[right]] && left<hash[s[right]]){
            left=hash[s[right]];
        }
        hash[s[right]]=right+1;
        maxx=maxx<(right-left+1)?(right-left+1):maxx;
        right++;
    }
    return maxx;
}