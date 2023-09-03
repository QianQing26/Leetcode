int cmp(int *a,int *b){
    return *a-*b;
}

int eliminateMaximum(int* dist, int distSize, int* speed, int speedSize){
    int times[distSize];
    for(int i=0;i<distSize;i++){
        times[i]=(dist[i]-1)/speed[i];
    }
    qsort(times,distSize,sizeof(int),cmp);
    for(int i=0;i<distSize;i++){
        if(times[i]<i){
            return i;
        }
    }
    return distSize;
}