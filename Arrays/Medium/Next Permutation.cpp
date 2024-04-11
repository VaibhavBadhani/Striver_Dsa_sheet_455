class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int k = n-2;
        //null check
        if(n==0)
        {
            return ;
        }
        //placement of k
        for(int i= n-1;i>0;i--)
        {
            if(nums[i]<=nums[i-1])
            {
                k--;
            }
            else
            {
                break;
            }
        }
        if(k==-1) {reverse(nums.begin(),nums.end());return;}
        for(int i =n-1;i>=0;i--)
        {
            if(nums[i]>nums[k])
            {
                swap(nums[i],nums[k]);
                break;
            }
        }
        reverse(nums.begin()+k+1,nums.end());
        return;        
    }
};