

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    int *result=(int*)malloc(numsSize*sizeof(int));
    int k=numsSize-1;
    for(int i=0,j=numsSize-1;i<=j;){
        if(nums[i]*nums[i]>nums[j]*nums[j]){
            result[k--]=nums[i]*nums[i];
            i++;
        }
        else{
            result[k--]=nums[j]*nums[j];
            j--;
        }
    }
    *returnSize=numsSize;
    return result;
}