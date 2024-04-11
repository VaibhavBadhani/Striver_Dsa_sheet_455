class Solution {
public:
    int  maxsubarryhelper(vector<int>&nums,int start,int end)
    {


                    /**************** DIVIDE AND CONQUER*************/
        if(start==end)return nums[start];
        int maxleftbordersum = INT_MIN;int maxrightbordersum = INT_MIN;
        int mid = start+((end-start)>>1);
        int maxleftsum = maxsubarryhelper(nums,start,mid);
        int maxrightrsum = maxsubarryhelper(nums,mid+1,end);
        //cross bordert sum
        int leftbordersum =0;
        int rightbordersum=0;
        for(int i = mid;i>=start;i--)
        {
            leftbordersum += nums[i];
            if(leftbordersum>maxleftbordersum) maxleftbordersum=leftbordersum;
        }
         for(int i = mid+1;i<=end;i++)
        {
            rightbordersum += nums[i];
            if(rightbordersum>maxrightbordersum) maxrightbordersum=rightbordersum;
        }
        int cbs =maxrightbordersum+maxleftbordersum;
        return max(maxleftsum,max(cbs,maxrightrsum));

    }
    int maxSubArray(vector<int>& nums) {
      return maxsubarryhelper(nums,0,nums.size()-1);  
    }
};