bool isAnagram(char * s, char * t){
    int cnt[26];
    memset(cnt,0,sizeof(cnt));
    while(*s!='\0'){
        cnt[(int)((*s)-'a')]++;
        s++;
    }
    while(*t!='\0'){
        cnt[(int)((*t)-'a')]--;
        t++;
    }
    for(int i=0;i<26;i++){
        if(cnt[i]!=0)return false;
    }
    return true;
}