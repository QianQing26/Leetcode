//可能是因为交换的过程设置了一个新变量，导致运行很慢

void moveZeroes(int* nums, int numsSize){
    int left=0,right=0;
    while(right<numsSize){
        if(nums[right]){
            int temp=nums[left];
            nums[left]=nums[right];
            nums[right]=temp;
            left++;
        }
        right++;
    }
}