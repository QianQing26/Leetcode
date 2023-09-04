class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)return 1;
        int left=1;
        int right=num-1;
        while(left<=right){
            int middle=(right+left)/2;
            if((long long)middle*middle==num){
                return true;
            }
            if((long long)middle*middle>num){
                right=middle-1;
            }
            else{
                left=middle+1;
            }
        }
        return false;
    }
};