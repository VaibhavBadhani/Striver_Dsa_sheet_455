class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n*(n+1))/2;
        int tmp =0;
        for(int a:nums){
            tmp+=a;
        }
        return sum-tmp;
    }
};