

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    int Left=getLeftborder(nums,numsSize,target);
    int Right=getRightborder(nums,numsSize,target);
    int* ans=(int*)malloc(2*sizeof(int));
    *returnSize=2;
    if(Left==-2 || Right ==-2){
        ans[0]=-1;
        ans[1]=-1;
        return ans;
    }
    if(Right-Left>1){
        ans[0]=Left+1;
        ans[1]=Right-1;
        return ans;
    }
    else{
        ans[0]=-1;
        ans[1]=-1;
        return ans;
    }
}

int getRightborder(int *nums,int numsSize,int target){
    int left=0;
    int right=numsSize-1;
    int rightBorder=-2;
    while(left<=right){
        int middle=(left+right)/2;
        if(nums[middle]>target){
            right=middle-1;
        }
        else{
            left=middle+1;
            rightBorder=left;
        }
    }
    return rightBorder;
}

int getLeftborder(int *nums,int numsSize,int target){
    int left=0;
    int right=numsSize-1;
    int leftBorder=-2;
    while(left<=right){
        int middle=(left+right)/2;
        if(nums[middle]<target){
            left=middle+1;
        }
        else{
            right=middle-1;
            leftBorder=right;
        }
    }
    return leftBorder;
}