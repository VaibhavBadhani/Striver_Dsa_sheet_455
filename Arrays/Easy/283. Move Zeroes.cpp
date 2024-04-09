class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i =0;
        int k =0;
        int n = nums.size();
        for(int j =0;j<n;j++){
            if(nums[j]!=0){
                nums[i++]=nums[j];
                k++;
            }
        }
        for(int j =k;j<n;j++){
            nums[j]=0;
        }
    }
};