int mySqrt(int x){
    if(x==0)return 0;
    if(x==1)return 1;
    int left=1;
    int right=x-1;
    while(left<=right){
        int middle=(right+left)/2;
        if(((long long)middle*middle)>x){
            right=middle-1;
        }
        else{
            left=middle+1;
        }
    }
    return right;
}