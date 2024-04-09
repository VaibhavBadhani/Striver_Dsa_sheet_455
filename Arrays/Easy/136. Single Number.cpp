class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = 0;
        for(int a:nums){
            x=x^a;
        }
        return x;
    }
};