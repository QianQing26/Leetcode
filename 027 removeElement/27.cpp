class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slow=0;
        for(int fast=0;fast<nums.size();fast++){
            //使用快慢指针，快指针遍历数组，慢指针计数并生成新数组
            if(nums[fast]!=val){
                nums[slow]=nums[fast];
                slow++;
            }
        }
        return slow;
    }
};