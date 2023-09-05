class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //最小值一定在中间出现，于是使用双指针法，从头尾同时开始遍历，并且把较大值依次从待求数组尾部放入
        vector<int>result(nums.size(),0);
        int k=nums.size()-1;
        for(int i=0,j=nums.size()-1;i<=j;){
            if(nums[i]*nums[i]>nums[j]*nums[j]){
                result[k--]=nums[i]*nums[i];
                i++;
            }
            else{
                result[k--]=nums[j]*nums[j];
                j--;
            }
        }
        return result;
    }
};