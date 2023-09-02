

int findMaxConsecutiveOnes(int* nums, int numsSize){
    int max=0,cnt=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==1){
            cnt++;
            if(cnt>max)
                max=cnt;
        }
        else 
            cnt=0;
    }
    return max;
}
