class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            int middle=(left+right)/2;
            if(nums[middle]<target){
                left=middle+1;
            }
            else if(nums[middle]>target){
                right=middle-1;
            }
            else{
                return middle;
            }
        }
        return right+1;
    }
};
//要注意处理数组中没有target的情况，分情况分析可以知道，此时应该返回right+1