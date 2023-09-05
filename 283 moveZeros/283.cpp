class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left=0,right=0;
        int n=nums.size();
        while(right<n){
            if(nums[right]){
                swap(nums[left++],nums[right]);
            }
            right++;
        }
    }
};