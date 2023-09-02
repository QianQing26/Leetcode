int captureForts(int* forts, int fortsSize){
    int ans=0,pre=-1;
    for(int i=0;i<fortsSize;i++){
        if(forts[i]==1 || forts[i]==-1){
            if(pre>=0 && forts[pre]!=forts[i]){
                ans=ans>(i-pre-1)?ans:(i-pre-1);
            }
            pre=i;
        }
    }
    return ans;
}
