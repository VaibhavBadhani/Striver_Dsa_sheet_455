class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int  x =0;
        int mini = INT_MIN;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==1){
                x+=1;
            }
            else{
                x=0;
            }
            mini=max(mini,x);
        }
        return mini;
    }
};